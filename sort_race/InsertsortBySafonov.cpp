#include <vector>

using namespace std;

template<typename T>
void InsertSort(T* mas, int n) //сортировка вставками
{
	int key;
	for (int i = 0; i < n - 1; i++)
	{
		key = i + 1;
		T temp = mas[key];
		for (int j = i + 1; j > 0; j--)
		{
			if (temp < mas[j - 1])
			{
				mas[j] = mas[j - 1];
				key = j - 1;
			}
		}
		mas[key] = temp;
	}
}

vector<int> insertsort_by_Safonov(vector<int> data)
{
	InsertSort(&data[0], data.size());
	return data;
}

vector<double> insertsort_by_Safonov(vector<double> data)
{
	InsertSort(&data[0], data.size());
	return data;
}
