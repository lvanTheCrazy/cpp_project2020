#include<vector>
using namespace std;

template<typename T>
bool larger_af(T aValue1, T aValue2)
{
	return aValue1 > aValue2;
}


template<typename T>
void insert_sort_af(vector<T>& aVector)
{
	unsigned end = aVector.size() - 1;
	for (unsigned i = end; i > 0; --i)
		if (larger_af<T>(aVector[i - 1], aVector[i]))
		{
			T tmp;
			tmp = aVector[i-1];
			aVector[i-1] = aVector[i];
			aVector[i] = tmp;

		}

	for (unsigned i = 2; i <= end; ++i)
	{
		unsigned j = i;
		unsigned value = aVector[i];

		while (larger_af<T>(aVector[j - 1], value))
		{
			aVector[j] = aVector[j - 1];
			--j;
		}
		aVector[j] = value;
	}
}
vector<int> InsertSoft_Afanasev(vector<int> data)
{
	insert_sort_af(data);
	return data;
}

vector<double> InsertSoft_Afanasev(vector<double> data)
{
	insert_sort_af(data);
	return data;
}