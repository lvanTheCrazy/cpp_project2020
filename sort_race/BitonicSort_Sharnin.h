#pragma once
#include<vector>

using namespace std;
template <typename T>
void compAndSwap(vector<T>& mass, size_t i, size_t j, int direction)
{
    if (direction == (mass[i] > mass[j]))
        swap(mass[i], mass[j]);
}
template <typename T>
void bitonicMergeBySharnin(vector<T>& mass, size_t low, size_t Numb, int direction)
{
    if (Numb > 1)
    {
        size_t k = Numb / 2;
        for (size_t i = low; i < low + k; i++)
            compAndSwap(mass, i, i + k, direction);
        bitonicMergeBySharnin(mass, low, k, direction);
        bitonicMergeBySharnin(mass, low + k, k, direction);
    }
}


template <typename T>
void bitonicSortBySharnin(vector<T>& mass, size_t low, size_t Numb, int direction)
{
    if (Numb > 1)
    {
        int k = Numb / 2;
        // сортировка в порядке возрастания, так как dir здесь равен 1
        bitonicSortBySharnin(mass, low, k, 1);
        // сортировка по убыванию, так как dir здесь 0
        bitonicSortBySharnin(mass, low + k, k, 0);
        // Будем объединять последовательность в порядке возрастания
        // так как dir = 1.
        bitonicMergeBySharnin(mass, low, Numb, direction);
    }
}


template <typename T>
vector<T> BitonicSortBySharnin(vector<T> mass)
{
    size_t N = mass.size();
    bitonicSortBySharnin(mass, 0, N, 1);
    return mass;
}