#include <vector>
#include <algorithm>
#include "DataSets.h"

using namespace std;


// GENERATORS OF DIFFERENT INPUT DATA SCENARIOS FOR TIMSORT
vector<int> LaputinTeamGenerateNormalDataTimsort(int size)
{
    vector<int> data;
    while (data.size() < size)
    {
        int sequance = rand() % 512;
        vector<int> seq(sequance);
        for (int& d : seq)
            d = rand() % INT_MAX;
        sort(seq.begin(), seq.end());
        data.insert(data.end(), seq.begin(), seq.end());
    }
    data.resize(size);
    return data;
}
vector<int> LaputinTeamGenerateBestDataTimsort(int size)
{
    int i = INT_MAX;
    vector<int> data(size);
    for (int& d : data)
        d = i--;
    return data;
}
vector<int> LaputinTeamGenerateWorstDataTimsort(int size)
{
    int i = 2 + rand() / INT_MAX;
    vector<int> data(size);
    bool Flag = true;
    for (int& d : data)
    {
        d = (Flag) ? i-- : i++;
        Flag = !Flag;
    }
    return data;
}

vector <int> LaputinTeamGenerateBestDataRadixLSD(int size) {
    vector <int>data(size);
    for (int& i : data)
        i = rand() % 10;
    return data;
}
vector <int> LaputinTeamGenerateWorstDataRadixLSD(int size) {
    vector <int>data(size);
    for (int& i : data)
        i = 1000000 + rand() % 8000000;
    return data;
}
vector <int> LaputinTeamGenerateNormalDataRadixLSD(int size) {
	vector <int>data(size);
	for (int& i : data)
		i = 1000 + rand() %8000;
	return data;
}

vector<int> LaputinTeamGenerateBestDataQuicksort(int size) {
    vector<int> data(size);
    for (int& i : data) {//���� ���� ��������� �� n/2 � n/2-1 ��������� ������ ���(��� ������ � �����), ��������� ����� ������ � ����������� ������� ���� ��������� ������� � �������
        i = i = 100 + rand() % 500;
    }
    return data;
}
vector<int> LaputinTeamGenerateNormalDataQuicksort(int size) {//��������� ����� ������ � ����������� ������ ���� ��������� ������� � �������
    vector<int> data(size);
    for (int& i : data) {
        i = 100 + rand() % 500;
    }

    return data;
}
vector<int> LaputinTeamGenerateWorstDataQuicksort(int size) { // ���� ���� ��������� �� n-1 � 0 ��������� ������ ���
    vector<int> data(size);
    for (int& i : data) {                                        //���� ������� ������� ������ ���������� ��� ����������
        i = 1 + rand() % 2;                                  //���� ������ ������� �� ��������� ������������� ���������
    }
    sort(data.begin(), data.end());
    return data;
}