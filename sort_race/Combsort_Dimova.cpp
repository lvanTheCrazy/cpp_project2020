#include <vector>
using namespace std;

template <typename T>
void comb_dimova(vector<T>& data)
{
	double factor = 1.2473309; // коэффицинт уменьшения разрыва, оптимальное значение (выведенно из формулы)
	int step = data.size() - 1;

	while (step >= 1)
	{
		for (int i = 0; i + step < data.size(); i++)
		{
			if (data[i] > data[i + step])
			{
				swap(data[i], data[i + step]);  // меняем местами элементы
			}
		}
		step = step / factor; // изменение шага в соответстии с коэффициентом разрыва
	}
}

vector<int> Combsort_Dimova(vector<int> data) // функция для int
{
	comb_dimova(data);
	return data;
}

vector<double> Combsort_Dimova(vector<double> data) // функция для double
{
	comb_dimova(data);
	return data;
}