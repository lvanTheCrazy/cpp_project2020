#include <vector>
using namespace std;
// Kononenko -------------------------------------------------------
vector<int> NegativeIntegerGenerateData(int size, int max_value = INT_MAX)
{
	vector<int> data(size);
	for (int& d : data)
		d = -(rand() % max_value);
	return data;
}
vector<int> SemiSortedIntegerGenerateData(int size, int max_value = INT_MAX)
{
	vector<int> data(size);
	for (size_t i = 0; i < size; i++) {
		if (i < size / 2)
			data[i] = i;
		else
			data[i] = (rand() % max_value);
	}
	return data;
}
vector<int> FullSortedIntegerGenerateData(int size, int max_value = INT_MAX)
{
	vector<int> data(size);
	for (size_t i = 0; i < size - 1; i++) {
		data[i] = i;
	}
	return data;
}
vector<double> NegativeDuobleGenerateData(double size, int max_value = INT_MAX)
{
	vector<double> data(size);
	for (double& d : data)
		d = -(rand() % max_value);
	return data;
}
vector<double> SemiSortedDoubleGenerateData(double size, int max_value = INT_MAX)
{
	vector<double> data(size);
	for (size_t i = 0; i < size; i++) {
		if (i < size / 2)
			data[i] = i;
		else
			data[i] = (rand() % max_value);
	}
	return data;
}
vector<double> FullSortedDoubleGenerateData(double size, int max_value = INT_MAX)
{
	vector<double> data(size);
	for (size_t i = 0; i < size - 1; i++) {
		data[i] = i;
	}
	return data;
}
// end -------------------------------------------------------

