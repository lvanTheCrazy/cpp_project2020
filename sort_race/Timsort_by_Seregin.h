#pragma once
#include <vector>
#include <algorithm>

using namespace std;

//int getminrunSeregin(int N)
//{
//    while (N >= 64)
//        N /= 2;
//    return N;
//}

//
template <typename T>
void reflect_Seregin(vector<T>& data, int begin, int end)
{
    while (begin < end)
    {
        swap(data[begin++], data[end--]);
    }
}

// сортировка вставками внутри ранов
template <typename T>
void insertionSort_Seregin(vector<T>& data, int start, int end)
{
    int i, j, key;
    for (i = start + 1; i <= end; i++)
    {
        key = data[i];
        j = i - 1;
        while (j >= start && data[j] > key)
        {
            data[j + 1] = data[j];
            j--;
        }
        data[j + 1] = key;
    }
}

// слияние ранов
template <typename T>
void merge_Seregin(vector<T>& data, pair<int, int> X, pair<int, int> Y)
{
    vector<int> Xrun(data.begin() + X.first, data.begin() + X.first + X.second);
    int i = X.first;
    int iX = 0, iY = Y.first;
    bool IsEmpty = false;
    while (i < Y.first + Y.second && !IsEmpty)
    {
        if (iX < X.second)
        {
            if (iY < Y.first + Y.second)
            {
                if (Xrun[iX] < data[iY])
                    data[i] = Xrun[iX++];
                else
                    data[i] = data[iY++];
            }
            else
            {
                data[i] = Xrun[iX++];
            }
        }
        else
        {
            IsEmpty = true;
        }
        i++;
    }

}

// основное тело
template <typename T>
vector<T> Timsort_by_Seregin(vector<T> data)
{
    int N = data.size();
    int minrun = N;
    //int minrun = getminrunSeregin(N);
    while (minrun >= 64)
    {
        minrun /= 2;
    }
    int Index = 1;
    int prevIndex = Index - 1;
    vector <pair<int, int>> minruns;

    while (Index < N)
    {
        int RunStart = prevIndex;
        int RunEnd = prevIndex;
        bool IsIncreasing = false;
        // выбор рана
        while (data[prevIndex] < data[Index])
        {
            Index++;
            prevIndex++;
            IsIncreasing = true;
            if (Index >= N)
                break;
        }
        if (!IsIncreasing)
        {
            while (data[prevIndex] > data[Index])
            {
                Index++;
                prevIndex++;
                if (Index >= N)
                    break;
            }
            RunEnd = prevIndex;
            reflect_Seregin(data, RunStart, RunEnd);
        }
        RunEnd = prevIndex;
        if (RunEnd - RunStart + 1 < minrun)
        {
            if (N - 1 - minrun < Index)
                RunEnd = N-1;
            else
                RunEnd = RunStart + minrun - 1;
            insertionSort_Seregin(data, RunStart, RunEnd);
        }
        prevIndex = RunEnd + 1;
        Index = prevIndex + 1;
        // добавление информации о длине рана и начальном элементе
        minruns.push_back(make_pair(RunStart, RunEnd - RunStart + 1));
    }

    // слияние получившихся ранов
    while (minruns.size() >= 2)
    {
        int i = 0;
        bool IsMerged = false;
        while (i < minruns.size() - 2 && !IsMerged)
        {
            if (minruns[i].second < minruns[i + 1].second + minruns[i + 2].second)
            {
                merge_Seregin(data, minruns[i], minruns[i + 1]);
                minruns[i].second += minruns[i + 1].second;
                minruns.erase(minruns.begin() + i + 1);
                IsMerged = true;
            }
            i++;
        }
        if (!IsMerged)
        {
            merge_Seregin(data, minruns[i], minruns[i + 1]);
            minruns[i].second += minruns[i + 1].second;
            minruns.erase(minruns.begin() + i + 1);
        }
    }

    return data;
}

