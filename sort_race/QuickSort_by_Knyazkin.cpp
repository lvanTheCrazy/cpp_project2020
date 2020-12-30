#include <iostream>
#include <array>
#include <vector>
using namespace std;

template <typename T>
void Quick(vector<T>& a, int left, int right)
{
	int l = left; int r = right; /// задаем границы вектора, крайнюю левую и крайнюю правую
	int pivon = a[(l + r) / 2]; //// задаем опорный элемент, он будет вычисляться как средний между крайними элементами
	while (l <= r)
	{
		while (a[l] < pivon)
			l++;
		while (a[r] > pivon)
			r--;
		if (l <= r)
			swap(a[l++], a[r--]);
	}
	if (left < r)  /// рекурсивная функция
		Quick(a, left, r); ///сортируем левый подмассив
	if (right > l)
		Quick(a, l, right); /// сортируем правый подмассив 
}

vector<int> int_QuickSort_by_Knyazkin(vector<int> mas) {
	Quick(mas, 0, (int)mas.size() - 1);            /// функция для выдачи вектора интов 
	return mas;
}

//vector<double> double_QuickSort_by_Knyazkin(vector<double> mas) {
//	Quick(mas, 0, (int)mas.size() - 1);                  /// функция для выдачи вектора даблов
//	return mas;
//}