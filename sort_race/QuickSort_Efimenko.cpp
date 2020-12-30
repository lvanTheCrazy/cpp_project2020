#include <vector>
using namespace std;

template <typename T>
int BestPivot(const vector<T>& A, int lowb, int upb) {
	T a, b, c;
	int index_low, index_right, index_med, size;
	index_low = lowb + rand() % (upb - lowb);
	index_right = lowb + rand() % (upb - lowb);
	index_med = (index_right + index_low) / 2;
	a = A[index_low];
	c = A[index_right];
	b = A[index_med];
	if (a > b) {
		if (c > a)
			return index_low;
		return (b > c) ? index_med : index_right;
	}
	if (c > b)
		return index_med;
	return (a > c) ? index_right : index_low;
}

template <typename T>
int Partition(vector<T>& A, int lowb, int upb)
{
	int start, end, index_BPivot;
	T Pivot;
	index_BPivot = BestPivot(A, lowb, upb);
	swap(A[lowb], A[index_BPivot]);
	Pivot = A[lowb];
	start = lowb;
	end = upb;
	while (start < end) {
		while ((A[start] <= Pivot) && (start < upb)) {
			start++;
		}
		while (A[end] > Pivot) {
			end--;
		}
		if (start < end) {
			swap(A[start], A[end]);
		}
	}
	swap(A[lowb], A[end]);
	return end;
}
template <typename T>
void quicksort_Efimenko(vector<T>& A, int lowb, int upb) {
	int pivot_position;

	if (lowb < upb) {
		pivot_position = Partition(A, lowb, upb);
		quicksort_Efimenko(A, lowb, pivot_position - 1);
		quicksort_Efimenko(A, pivot_position + 1, upb);
	}
}
vector<int>QuickSort_Efimenko(vector<int> data) {
	quicksort_Efimenko(data, 0, data.size() - 1);
	return data;
}
vector<double>QuickSort_Efimenko(vector<double> data) {
	quicksort_Efimenko(data, 0, data.size() - 1);
	return data;
}