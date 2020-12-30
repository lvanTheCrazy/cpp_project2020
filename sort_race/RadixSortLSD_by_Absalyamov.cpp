#include <vector>
using namespace std;
int getMax_Absalyamov(vector<int>& v, int n)
{
    int mx = v[0];
    for (int i = 1; i < n; i++)
    {
        if (v[i] > mx)
            mx = v[i];
        if (v[i] < 0)
            return -1;
    }
    return mx;
}
void countSort_Absalyamov(vector<int>& v, int n, int exp)
{
    vector<int> output(n);
    int i, count[10] = { 0 };
    for (i = 0; i < n; i++)
        count[(v[i] / exp) % 10]++;
    for (i = 1; i < 10; i++)
        count[i] += count[i - 1];
    for (i = n - 1; i >= 0; i--) {
        output[count[(v[i] / exp) % 10] - 1] = v[i];
        count[(v[i] / exp) % 10]--;
    }
    for (i = 0; i < n; i++)
        v[i] = output[i];
}
void radixsort_Absalyamov(vector<int>& v, int n)
{
    int m = getMax_Absalyamov(v, n);
    if (m >= 0)
        for (int exp = 1; m / exp > 0; exp *= 10)
            countSort_Absalyamov(v, n, exp);
}

vector<int> RadixSortLSD_by_Absalyamov(vector<int> data) {
    int size = data.size();
    radixsort_Absalyamov(data, size);
    return data;
}

vector<double> RadixSortLSD_by_Absalyamov(vector<double> data)
{
    return data;
}
