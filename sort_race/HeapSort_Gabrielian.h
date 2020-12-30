#pragma once
#include <vector>

using namespace std;

// Функция нагромождения дерева
template <typename T>
void heapifyByGabrielian(vector<T>& mass, size_t n, double first)
{
    double max = first;
    int l = 2 * first + 1;
    int r = 2 * first + 2;

    if (l < n && mass[l] > mass[max])
        max = l;

    if (r < n && mass[r] > mass[max])
        max = r;

    if (max != first)
    {
        swap(mass[first], mass[max]);

        heapifyByGabrielian(mass, n, max);
    }
}

// Функция сортировки
template <typename T>
void heapSortByGabrielian(vector<T>& mass, size_t n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
        heapifyByGabrielian(mass, n, i);

    for (int i = n - 1; i >= 0; i--)
    {
        swap(mass[0], mass[i]);

        heapifyByGabrielian(mass, i, 0);
    }
}

template <typename T>
vector<T> HeapSortByGabrielian(vector<T> mass)
{
    size_t N = mass.size();
    heapSortByGabrielian(mass, N);
    return mass;
}