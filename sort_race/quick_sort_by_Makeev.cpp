#include<vector>
using namespace std;

template <typename T>
void QuickSort_mak(vector<T>& x, int first, int last)
{
    int pivot, j, i;

    if (first < last) {
        pivot = first;
        i = first;
        j = last;
        while (i < j) {
            while (x[i] <= x[pivot] && i < last)
                i++;
            while (x[j] > x[pivot])
                j--;
            if (i < j) {
                swap(x[i], x[j]);
            }
        }
        swap(x[pivot], x[j]);
        QuickSort_mak(x, first, j - 1);
        QuickSort_mak(x, j + 1, last);
    }
}

vector<int> QuickSort_Makeev(vector<int> data) //Функция для int
{
    QuickSort_mak(data, 0, data.size() - 1);
    return data;
}

vector<double> QuickSort_Makeev(vector<double> data) //Функция для Double
{
    QuickSort_mak(data, 0, data.size() - 1);
    return data;
}
