#include <vector>
#include <string>

using namespace std;

vector<int> CombSortInt_Schekotovskaya(vector<int> data)
{
	double cycle = data.size() - 1;
	while (cycle >= 1) {
		for (int i = 0; i + cycle < data.size(); ++i) {
			if (data[i] > data[i + cycle]) {
				swap(data[i], data[i + cycle]);
			}
		}
		cycle /= 1.247;
	}
	return data;
}

vector<double> CombSortDouble_Schekotovskaya(vector<double> data)
{
	double cycle = data.size() - 1;
	while (cycle >= 1) {
		for (int i = 0; i + cycle < data.size(); ++i) {
			if (data[i] > data[i + cycle]) {
				swap(data[i], data[i + cycle]);
			}
		}
		cycle /= 1.247;
	}
	return data;
}
