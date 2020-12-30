#include <vector>
using namespace std;

template <typename T>
void Insertion_Stepuro(vector<T>& data)
{
	T bufer = 0; //��������� ��������� ���������
	int j = 0;
	for (int i = 1; i < (int)data.size(); i++)
	{ //���� ��������� �������� �� �������
		bufer = data[i];
		for (j = i - 1; (j >= 0) && (data[j] > bufer); j--)
			data[j + 1] = data[j]; //�������� ��������� �� 1 ����. ���� �����
		data[j + 1] = bufer;
	}
}

vector<int> InsertionSort_Stepuro(vector<int> data)
{
	Insertion_Stepuro(data);
	return data;
}
vector<double> InsertionSort_Stepuro(vector<double> data)
{
	Insertion_Stepuro(data);
	return data;
}