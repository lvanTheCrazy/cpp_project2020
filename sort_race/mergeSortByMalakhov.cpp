#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <string>
using namespace std;



void mergeArrays(vector<int>& arr, vector<int>& extra, const int& left, const int& right)
{
	int middle = (left + right) / 2;
	int first = left;
	int second = right;
	int fin = middle + 1;
	int k = 0;
	int j;
	for (j = left; j <= right && (!(first > middle || fin > right)); j++)
	{
		if (arr.at(first) < arr.at(fin))
		{
			extra.at(j) = arr.at(first++);
		}
		else
		{
			extra.at(j) = arr.at(fin++);
		}
	}
	for (; first <= middle; j++)
	{
		extra.at(j) = arr.at(first++);
	}
	for (; fin <= right; j++)
	{
		extra.at(j) = arr.at(fin++);
	}
	for (int j = left; j <= right; j++) arr.at(j) = extra.at(j);

}

void mergeSort2(vector<int>& arr, vector<int>& extra, const int& left, const int& right)
{

	if (left >= right) return;
	int middle = (left + right) / 2;
	mergeSort2(arr, extra, left, middle);
	mergeSort2(arr, extra, middle + 1, right);
	mergeArrays(arr, extra, left, right);
}


vector<int> mergeSortByMalakhov(vector<int> arr)
{
	vector<int> extra(arr.size(), 0);
	mergeSort2(arr, extra, 0, arr.size() - 1);;
	return arr;
}




void mergeArrays(vector<double>& arr, vector<double>& extra, const int& left, const int& right)
{
	int middle = (left + right) / 2;
	int first = left;
	int second = right;
	int fin = middle + 1;
	int k = 0;
	int j;
	for (j = left; j <= right && (!(first > middle || fin > right)); j++)
	{
		if (arr.at(first) < arr.at(fin))
		{
			extra.at(j) = arr.at(first++);
		}
		else
		{
			extra.at(j) = arr.at(fin++);
		}
	}
	for (; first <= middle; j++)
	{
		extra.at(j) = arr.at(first++);
	}
	for (; fin <= right; j++)
	{
		extra.at(j) = arr.at(fin++);
	}
	for (int j = left; j <= right; j++) arr.at(j) = extra.at(j);

}

void mergeSort2(vector<double>& arr, vector<double>& extra, const int& left, const int& right)
{

	if (left >= right) return;
	int middle = (left + right) / 2;
	mergeSort2(arr, extra, left, middle);
	mergeSort2(arr, extra, middle + 1, right);
	mergeArrays(arr, extra, left, right);
}

vector<double> mergeSortByMalakhov(vector<double> arr)
{
	vector<double> extra(arr.size(), 0);
	mergeSort2(arr, extra, 0, arr.size() - 1);;
	return arr;
}

void mergeArrays(vector<float>& arr, vector<float>& extra, const int& left, const int& right)
{
	int middle = (left + right) / 2;
	int first = left;
	int second = right;
	int fin = middle + 1;
	int k = 0;
	int j;
	for (j = left; j <= right && (!(first > middle || fin > right)); j++)
	{
		if (arr.at(first) < arr.at(fin))
		{
			extra.at(j) = arr.at(first++);
		}
		else
		{
			extra.at(j) = arr.at(fin++);
		}
	}
	for (; first <= middle; j++)
	{
		extra.at(j) = arr.at(first++);
	}
	for (; fin <= right; j++)
	{
		extra.at(j) = arr.at(fin++);
	}
	for (int j = left; j <= right; j++) arr.at(j) = extra.at(j);

}

void mergeSort2(vector<float>& arr, vector<float>& extra, const int& left, const int& right)
{

	if (left >= right) return;
	int middle = (left + right) / 2;
	mergeSort2(arr, extra, left, middle);
	mergeSort2(arr, extra, middle + 1, right);
	mergeArrays(arr, extra, left, right);
}

vector<float> mergeSortByMalakhov(vector<float> arr)
{
	vector<float> extra(arr.size(), 0);
	mergeSort2(arr, extra, 0, arr.size() - 1);;
	return arr;
}

void mergeArrays(vector<char>& arr, vector<char>& extra, const int& left, const int& right)
{
	int middle = (left + right) / 2;
	int first = left;
	int second = right;
	int fin = middle + 1;
	int k = 0;
	int j;
	for (j = left; j <= right && (!(first > middle || fin > right)); j++)
	{
		if (arr.at(first) < arr.at(fin))
		{
			extra.at(j) = arr.at(first++);
		}
		else
		{
			extra.at(j) = arr.at(fin++);
		}
	}
	for (; first <= middle; j++)
	{
		extra.at(j) = arr.at(first++);
	}
	for (; fin <= right; j++)
	{
		extra.at(j) = arr.at(fin++);
	}
	for (int j = left; j <= right; j++) arr.at(j) = extra.at(j);

}

void mergeSort2(vector<char>& arr, vector<char>& extra, const int& left, const int& right)
{

	if (left >= right) return;
	int middle = (left + right) / 2;
	mergeSort2(arr, extra, left, middle);
	mergeSort2(arr, extra, middle + 1, right);
	mergeArrays(arr, extra, left, right);
}

vector<char> mergeSortByMalakhov(vector<char> arr)
{
	vector<char> extra(arr.size(), 0);
	mergeSort2(arr, extra, 0, arr.size() - 1);;
	return arr;
}

void mergeArrays(vector<string>& arr, vector<string>& extra, const int& left, const int& right)
{
	int middle = (left + right) / 2;
	int first = left;
	int second = right;
	int fin = middle + 1;
	int k = 0;
	int j;
	for (j = left; j <= right && (!(first > middle || fin > right)); j++)
	{
		if (arr.at(first) < arr.at(fin))
		{
			extra.at(j) = arr.at(first++);
		}
		else
		{
			extra.at(j) = arr.at(fin++);
		}
	}
	for (; first <= middle; j++)
	{
		extra.at(j) = arr.at(first++);
	}
	for (; fin <= right; j++)
	{
		extra.at(j) = arr.at(fin++);
	}
	for (int j = left; j <= right; j++) arr.at(j) = extra.at(j);

}

void mergeSort2(vector<string>& arr, vector<string>& extra, const int& left, const int& right)
{

	if (left >= right) return;
	int middle = (left + right) / 2;
	mergeSort2(arr, extra, left, middle);
	mergeSort2(arr, extra, middle + 1, right);
	mergeArrays(arr, extra, left, right);
}

vector<string> mergeSortByMalakhov(vector<string> arr)
{
	vector<string> extra(arr.size(), 0);
	mergeSort2(arr, extra, 0, arr.size() - 1);;
	return arr;
}


void mergeArrays(vector<bool>& arr, vector<bool>& extra, const int& left, const int& right)
{
	int middle = (left + right) / 2;
	int first = left;
	int second = right;
	int fin = middle + 1;
	int k = 0;
	int j;
	for (j = left; j <= right && (!(first > middle || fin > right)); j++)
	{
		if (arr.at(first) < arr.at(fin))
		{
			extra.at(j) = arr.at(first++);
		}
		else
		{
			extra.at(j) = arr.at(fin++);
		}
	}
	for (; first <= middle; j++)
	{
		extra.at(j) = arr.at(first++);
	}
	for (; fin <= right; j++)
	{
		extra.at(j) = arr.at(fin++);
	}
	for (int j = left; j <= right; j++) arr.at(j) = extra.at(j);

}

void mergeSort2(vector<bool>& arr, vector<bool>& extra, const int& left, const int& right)
{

	if (left >= right) return;
	int middle = (left + right) / 2;
	mergeSort2(arr, extra, left, middle);
	mergeSort2(arr, extra, middle + 1, right);
	mergeArrays(arr, extra, left, right);
}

vector<bool> mergeSortByMalakhov(vector<bool> arr)
{
	vector<bool> extra(arr.size(), 0);
	mergeSort2(arr, extra, 0, arr.size() - 1);;
	return arr;
}








