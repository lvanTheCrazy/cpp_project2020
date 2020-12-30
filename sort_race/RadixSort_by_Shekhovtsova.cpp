#include <vector>
using namespace std;

int FindMax_by_Shekhovtsova(const vector <int>& data)
{
    int max = data[0];
    for (const auto& num : data) {
        if (max < num) max = num;
        if (num < 0) return -1;
    }
    return max;
}
void CountingSort_by_Shekhovtsova(vector<int>& data, int pos)
{
    size_t n = data.size();
    vector<int> result;
    result.resize(n);
    vector <int> counts(10);

    // count how often each item appears
    for (const auto& num : data)
        ++counts[(num / pos) % 10];

    // update: counts[i] says how many elements come before i
    int total = 0;
    for (auto& count : counts) {
        int old_count = count;
        count = total;
        total += old_count;
    }

    // copy to output array
    for (size_t i = 0; i < n; i++)
        result[counts[(data[i] / pos) % 10]++] = data[i];
    for (size_t i = 0; i < n; i++)
        data[i] = result[i];
}
void RadixSortLSD_by_Shekhovtsova(vector<int>& data) // sort for unsigned int
{
    int max = FindMax_by_Shekhovtsova(data);
    if (max == -1) return;
    for (int pos = 1; max / pos > 0; pos *= 10)
        CountingSort_by_Shekhovtsova(data, pos);
}

vector<int> RadixSort_by_Shekhovtsova(vector<int> data) {
    RadixSortLSD_by_Shekhovtsova(data);
    return data;
}
vector<double> RadixSort_by_Shekhovtsova(vector<double> data) {
    return data;
}