#include <vector>
using namespace std;

vector<int> Data1_by_Shekhovtsova_team()
{
	return { 1, 7, 12, 21, 21, 24, 34, 41, 41, 47, 56, 59, 62, 62, 66, 69, 70,
		76, 84, 90, 103, 106, 107, 117, 124, 139, 149, 153, 162, 173, 180, 182,
		182, 201, 207, 224, 225, 226, 227, 238, 241, 243, 245, 254, 255, 257, 257,
		269, 278, 279, 280, 286, 288, 290, 292, 292, 296, 312, 317, 329, 330, 340,
		345, 348, 358, 364, 365, 367, 373, 375, 386, 387, 393, 394, 399, 403, 404,
		6, 90, 3, 56, 1, 100, 450, 34, 23, 98, 65, 54, 98, 1, 2, 34 };
}

vector<int> Data2_by_Shekhovtova_team(int size, int max_val = INT_MAX)
{
	vector <int> data(size);
	for (auto& num : data)
		num = (-1) * max_val + rand() % max_val;
	return data;
}

vector <int> Data3_by_Shekhovtsova_team(int size, int max_val=10)
{
	vector <int> data(size);
	for (auto& num : data)
		num = rand() % max_val;
	return data;
}

vector <int> Data4_by_Shekhovtsova_team(int size)
{
	vector <int> data(size);
	for (auto& num : data)
		num = size--;
	return data;
}

//vector<double> GenerateDoubleData()
//{
//	return { 1, 3, 2 };
//}