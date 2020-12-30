#include <vector>
std::vector<int> BadForKaryaginTkachevTeam(int size)
{
	std::vector<int> data;
	for (int i = 1; i < size; i++)
		data.push_back(i);
	return data;
}