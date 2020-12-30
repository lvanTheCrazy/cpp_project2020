#pragma once
#include <iostream>
#include <vector>

using namespace std;

template<typename T>
vector<T> merge_Niyazmukhammedov(vector<T> left, vector<T> right)
{
	size_t ileft = 0, iright = 0;
	vector<T> results;
	while (ileft < left.size() && iright < right.size())
		if (left[ileft] < right[iright])
			results.push_back(left[ileft++]);
		else
			results.push_back(right[iright++]);
	while (ileft < left.size()) results.push_back(left[ileft++]);
	while (iright < right.size()) results.push_back(right[iright++]);
	return results;
}

template<typename T>
vector<T> Merge_sort_by_Niyazmuhammedow(vector<T> arr) {
	if (arr.size() <= 1)
		return arr;
	int len = arr.size() / 2;
	vector<T> left(arr.begin(), arr.begin() + len);
	vector<T> right(arr.begin() + len, arr.end());
	return merge_Niyazmukhammedov(Merge_sort_by_Niyazmuhammedow(left), Merge_sort_by_Niyazmuhammedow(right));
}
