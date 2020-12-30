#include <vector>
#include <array>
#include <iostream>

using namespace std;

//Для INT
vector<int>  CombSortBySuleimenovaZH(vector<int> data)  //Сортировка расческой
{
    double step = data.size()-1;   //Размер вектора
    while (step >= 1)  //когда step == 1, будет сортировка пузырьков
     {
        step = step/1.247;   //Для обновления значения разрыва
        for (int i = 0; i + step < data.size(); ++i)  //Сравним все элементы с текущим разрывом
        {
            if (data[i] > data[i + step]) 
            {                                             //Меняем местами
                swap(data[i], data[i + step]);
            }
        }
    }
    return data;  //Возвращаем вектор
}

//Для DOUBLE
vector<double>  CombSortBySuleimenovaZH(vector<double> data)
{
    double step = data.size() - 1;
    while (step >= 1)
    {
        step = step / 1.247;
        for (int i = 0; i + step < data.size(); ++i)
        {
            if (data[i] > data[i + step])
            {
                swap(data[i], data[i + step]);
            }
        }
    }
    return data;
}

