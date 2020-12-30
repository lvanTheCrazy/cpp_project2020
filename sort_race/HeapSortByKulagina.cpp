#include <vector>

using namespace std;

template <typename T>
void max_heapify(std::vector<T>& arr, int i, int size_)
{
	int largest, l = (2 * i) + 1, r = l + 1;
	if (l < size_ && arr[l] > arr[i])
	{
		largest = l;
	}
	else
	{
		largest = i;
	}
	if (r < size_ && arr[r] > arr[largest])
	{
		largest = r;
	}
	if (largest != i)
	{
		std::swap(arr[i], arr[largest]);
		max_heapify(arr, largest, size_);
	}
}


vector<int> HeapSortByKulagina(std::vector<int> arr)
{
	for (int i = (arr.size() / 2); i >= 0; i--)
	{
		max_heapify(arr, i, arr.size());
	}
	int sz = arr.size();
	for (int i = arr.size() - 1; i > 0; i--)
	{
		std::swap(arr[0], arr[i]);
		sz--;
		max_heapify(arr, 0, sz);
	}
	return arr;
}

vector<double> HeapSortByKulagina(std::vector<double> arr)
{
	for (int i = (arr.size() / 2); i >= 0; i--)
	{
		max_heapify(arr, i, arr.size());
	}
	int sz = arr.size();
	for (int i = arr.size() - 1; i > 0; i--)
	{
		std::swap(arr[0], arr[i]);
		sz--;
		max_heapify(arr, 0, sz);
	}
	return arr;
}