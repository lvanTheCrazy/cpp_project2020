#pragma once
#include <vector>
using namespace std;

template<typename T>
int partition_Ageenko(vector<T>& data, int low, int high){
    T l = data[low];         
    T pivot = l;
    T r = data[high];
    T m = data[(low + high) / 2];
    if ((r > l && r < m) || (r > m && r < l))
        pivot = r;
    if ((m > r && m < l) || (m > l && m < r))
        pivot = m;
    
    int i = low - 1, j = high + 1;
    while (true) {
        do {    
            i++;
        } while (data[i] < pivot);

        do {
            j--;
        } while (data[j] > pivot);
        if (i >= j)
            return j;
        swap(data[i], data[j]);
    }
}
template<typename T> 
void quickSort_Ageenko(vector<T>& data, int low, int high)
{
    if (low < high) {
        int pi = partition_Ageenko(data, low, high);
        quickSort_Ageenko(data, low, pi);
        quickSort_Ageenko(data, pi + 1, high);
    }
}


template<typename T>
vector<T> QuickSort_by_Ageenko(vector<T> data) {
    quickSort_Ageenko(data, 0, data.size() - 1);
    return data;
}

