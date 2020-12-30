#include <iostream>
#include <array>
#include <vector>


using namespace std;

template <typename T>
void Merge(vector<T>& a, int first, int last) {
	int middle = (first + last) / 2;
	int start = first;
	int index = first;
	int finish = middle + 1;
	if (a[middle] < a[(size_t)middle + 1])
		return;
	int size = last - first + 1;
	T* tmp;
	tmp = (T*)malloc((size) * sizeof(T));
	if (tmp == nullptr) {
		throw "ups";
	}

	while (start <= middle && finish <= last) {
		if (a[start] <= a[finish]) {
			tmp[index - first] = a[start];
			start++;
			index++;
		}
		else {
			tmp[index - first] = a[finish];
			finish++;
			index++;
		}
	}

	while (start <= middle) {
		tmp[index - first] = a[start];
		start++;
		index++;
	}

	while (finish <= last) {
		tmp[index - first] = a[finish];
		finish++;
		index++;
	}

	for (int i = first; i <= last;i++)
		a[i] = tmp[i - first];
	free(tmp);
}

template<typename T>
void MergeSort(vector <T>& a, int first, int last) {

	if (first < last) {
		MergeSort(a, first, (first + last) / 2);
		MergeSort(a, ((first + last) / 2) + 1, last);
		Merge(a, first, last);
	}
	else
		return;
}

vector<int> MergeSort_by_Badeev(vector<int> mas) {
	MergeSort(mas, 0, (int)mas.size() - 1);
	return mas;
}

vector<double> MergeSort_by_Badeev(vector<double> mas) {
	MergeSort(mas, 0, (int)mas.size() - 1);
	return mas;
}



