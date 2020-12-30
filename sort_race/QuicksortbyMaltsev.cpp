#include <vector>
#include <array>
#include <string>
using namespace std;

void quicksort_by_Maltsev2(vector<int>& array, int startIdx, int endIdx);

vector<int> quickSortbyMaltsev(vector<int> array) {
    vector<int> res(array.begin(), array.end());
    quicksort_by_Maltsev2(res, 0, array.size() - 1);
    return res;
}

void quicksort_by_Maltsev2(vector<int>& array, int startIdx, int endIdx) {
    if (startIdx >= endIdx) {
        return;
    }
    int pivotIdx = startIdx;
    int leftIdx = startIdx + 1;
    int rightIdx = endIdx;
    while (rightIdx >= leftIdx) {
        if (array.at(leftIdx) > array.at(pivotIdx) && array.at(rightIdx) < array.at(pivotIdx)) {
            swap(array[leftIdx], array[rightIdx]);
        }
        if (array.at(leftIdx) <= array.at(pivotIdx)) {
            leftIdx += 1;
        }
        if (array.at(rightIdx) >= array.at(pivotIdx)) {
            rightIdx -= 1;
        }
    }
    swap(array[pivotIdx], array[rightIdx]);
    bool leftSubarrayIsSmaller = rightIdx - 1 - startIdx < endIdx - (rightIdx + 1);
    if (leftSubarrayIsSmaller) {
        quicksort_by_Maltsev2(array, startIdx, rightIdx - 1);
        quicksort_by_Maltsev2(array, rightIdx + 1, endIdx);
    }
    else {
        quicksort_by_Maltsev2(array, rightIdx + 1, endIdx);
        quicksort_by_Maltsev2(array, startIdx, rightIdx - 1);
    }
}



void quicksort_by_Maltsev2(vector<double>& array, int startIdx, int endIdx);

vector<double> quickSortbyMaltsev(vector<double> array) {
    vector<double> res(array.begin(), array.end());
    quicksort_by_Maltsev2(res, 0, array.size() - 1);
    return res;
}

void quicksort_by_Maltsev2(vector<double>& array, int startIdx, int endIdx) {
    if (startIdx >= endIdx) {
        return;
    }
    int pivotIdx = startIdx;
    int leftIdx = startIdx + 1;
    int rightIdx = endIdx;
    while (rightIdx >= leftIdx) {
        if (array.at(leftIdx) > array.at(pivotIdx) && array.at(rightIdx) < array.at(pivotIdx)) {
            swap(array[leftIdx], array[rightIdx]);
        }
        if (array.at(leftIdx) <= array.at(pivotIdx)) {
            leftIdx += 1;
        }
        if (array.at(rightIdx) >= array.at(pivotIdx)) {
            rightIdx -= 1;
        }
    }
    swap(array[pivotIdx], array[rightIdx]);
    bool leftSubarrayIsSmaller = rightIdx - 1 - startIdx < endIdx - (rightIdx + 1);
    if (leftSubarrayIsSmaller) {
        quicksort_by_Maltsev2(array, startIdx, rightIdx - 1);
        quicksort_by_Maltsev2(array, rightIdx + 1, endIdx);
    }
    else {
        quicksort_by_Maltsev2(array, rightIdx + 1, endIdx);
        quicksort_by_Maltsev2(array, startIdx, rightIdx - 1);
    }
}



void quicksort_by_Maltsev2(vector<float>& array, int startIdx, int endIdx);

vector<float> quickSortbyMaltsev(vector<float> array) {
    vector<float> res(array.begin(), array.end());
    quicksort_by_Maltsev2(res, 0, array.size() - 1);
    return res;
}

void quicksort_by_Maltsev2(vector<float>& array, int startIdx, int endIdx) {
    if (startIdx >= endIdx) {
        return;
    }
    int pivotIdx = startIdx;
    int leftIdx = startIdx + 1;
    int rightIdx = endIdx;
    while (rightIdx >= leftIdx) {
        if (array.at(leftIdx) > array.at(pivotIdx) && array.at(rightIdx) < array.at(pivotIdx)) {
            swap(array[leftIdx], array[rightIdx]);
        }
        if (array.at(leftIdx) <= array.at(pivotIdx)) {
            leftIdx += 1;
        }
        if (array.at(rightIdx) >= array.at(pivotIdx)) {
            rightIdx -= 1;
        }
    }
    swap(array[pivotIdx], array[rightIdx]);
    bool leftSubarrayIsSmaller = rightIdx - 1 - startIdx < endIdx - (rightIdx + 1);
    if (leftSubarrayIsSmaller) {
        quicksort_by_Maltsev2(array, startIdx, rightIdx - 1);
        quicksort_by_Maltsev2(array, rightIdx + 1, endIdx);
    }
    else {
        quicksort_by_Maltsev2(array, rightIdx + 1, endIdx);
        quicksort_by_Maltsev2(array, startIdx, rightIdx - 1);
    }
}


vector<string> quickSortbyMaltsev(vector<string> data) {
    return data;
}
vector<char> quickSortbyMaltsev(vector<char> data) {
    return data;
}
vector<bool> quickSortbyMaltsev(vector<bool> data) {
    return data;
}