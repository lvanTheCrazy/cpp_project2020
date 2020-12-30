#include <vector>
#include <string>
using namespace std;

vector<int> CombSortByKononenko(vector<int> data)
{
    float step = data.size();
    do{
        for (int i = 0; i + step < data.size(); ++i){
            if (data[i] > data[i + step]){
                swap(data[i], data[i + step]);
            }
        }
        step /= 1.247;
    } while (step >= 1);
    return data;
}

vector<double> CombSortByKononenko(vector<double> data)
{
    float step = data.size();
    do{
        for (int i = 0; i + step < data.size(); ++i) {
            if (data[i] > data[i + step]){
                swap(data[i], data[i + step]);
            }
        }
        step /= 1.247;
    } while (step >= 1);
    return data;
}

vector<float> CombSortByKononenko(vector<float> data)
{
    float step = data.size();
    do
    {
        for (int i = 0; i + step < data.size(); ++i)
        {
            if (data[i] > data[i + step])
            {
                swap(data[i], data[i + step]);
            }
        }
        step /= 1.247;
    } while (step >= 1);
    return data;
}

vector<string> CombSortByKononenko(vector<string> data) {
    return data;
}
vector<char> CombSortByKononenko(vector<char> data) {
    return data;
}
vector<bool> CombSortByKononenko(vector<bool> data) {
    return data;
}