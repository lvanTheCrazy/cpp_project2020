#include <vector>

using namespace std;

vector<int> countingSortByTkachev(vector<int> data)
{
	int max = data[0];
	for (int i = 0; i < data.size(); i++)
	{
		if (data[i] > max)
		{
			max = data[i];
		}
		if (data[i] < 0) // if even one number is negative, sorting by this algorithm is impossible
		{
			return { 1, 0 }; // return this to confirm that counting sort doesn't works (even when "data" is sorted before using this algorithm)
		}
	}
	if (max == INT_MAX)
	{
		return { 1, 0 };
	}
	vector<int> count(max + 1, 0);
	for (int elem : data)
	{
		++count[elem];
	}
	size_t b = 0;
	for (size_t i = 0; i < count.size(); i++)
	{
		for (size_t j = 0; j < count[i]; j++)
		{
			data[b] = i;
			b++;
		}
	}
	return data;
}

vector<double> countingSortByTkachev(vector<double> data)
{// also impossible for any floating point values
	return { 1, 0 };
}