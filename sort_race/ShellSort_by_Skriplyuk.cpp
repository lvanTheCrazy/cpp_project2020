#include <vector>
#include <string>
using namespace std;

vector<int> ShellSort_by_Skriplyuk(vector<int> vec)
{
    int n = vec.size();
    for (int distance = n / 2; distance > 0; distance /= 2)
    {
        for (int i = distance; i < n; i += 1)
        {
            int temp = vec[i];
            int j;
            for (j = i; j >= distance && vec[j - distance] > temp; j -= distance)
                vec[j] = vec[j - distance];
            vec[j] = temp;
        }
    }
    return vec;
}

vector<double> ShellSort_by_Skriplyuk(vector<double> vec)
{
    int n = vec.size();
    for (int distance = n / 2; distance > 0; distance /= 2)
    {
        for (int i = distance; i < n; i += 1)
        {
            double temp = vec[i];
            int j;
            for (j = i; j >= distance && vec[j - distance] > temp; j -= distance)
                vec[j] = vec[j - distance];
            vec[j] = temp;
        }
    }
    return vec;
}

vector<float> ShellSort_by_Skriplyuk(vector<float> vec)
{
    int n = vec.size();
    for (int distance = n / 2; distance > 0; distance /= 2)
    {
        for (int i = distance; i < n; i += 1)
        {
            float temp = vec[i];
            int j;
            for (j = i; j >= distance && vec[j - distance] > temp; j -= distance)
                vec[j] = vec[j - distance];
            vec[j] = temp;
        }
    }
    return vec;
}

vector<string> ShellSort_by_Skriplyuk(vector<string> data) {
    return data;
}
vector<char> ShellSort_by_Skriplyuk(vector<char> data) {
    return data;
}
vector<bool> ShellSort_by_Skriplyuk(vector<bool> data) {
    return data;
}