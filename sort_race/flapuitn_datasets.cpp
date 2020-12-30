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
    for (int& i : data) {//если идет разбиение на n/2 и n/2-1 элементов каждый раз(или близко к этому), случайный набор данных в большинстве случаев дает результат близкий к лучшему
        i = i = 100 + rand() % 500;
    }
    return data;
}
vector<int> LaputinTeamGenerateNormalDataQuicksort(int size) {//случайный набор данных в большинстве случае дает результат близкий к лучшему
    vector<int> data(size);
    for (int& i : data) {
        i = 100 + rand() % 500;
    }

    return data;
}
vector<int> LaputinTeamGenerateWorstDataQuicksort(int size) { // если идет разбиение на n-1 и 0 элементов каждый раз
    vector<int> data(size);
    for (int& i : data) {                                        //если опорный элемент всегда наибольший или наименьший
        i = 1 + rand() % 2;                                  //если массив состоит из множества повтор€ющихс€ элементов
    }
    sort(data.begin(), data.end());
    return data;
}