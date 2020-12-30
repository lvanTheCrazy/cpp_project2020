#include<vector>
using namespace std;

template<typename T>
void select_sort_klis(std::vector<T>& aVector)
{
    unsigned end = aVector.size();
    for (unsigned i = 0; i < end - 1; ++i)
    {
        unsigned min = i;
        for (unsigned j = i + 1; j < end; ++j)
            if (aVector[j] < aVector[min])
                min = j;
        swap(aVector[i], aVector[min]);
    }
}

vector<int> SelectSort_Klisunova(vector<int> data)
{
    select_sort_klis(data);
    return data;
}

vector<double> SelectSort_Klisunova(vector<double> data)
{
    select_sort_klis(data);
    return data;
}