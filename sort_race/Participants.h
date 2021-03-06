#pragma once
#include <vector>

template <typename T>
using Participant = std::vector<T>(*)(std::vector<T>);

std::vector<int> std_sort(std::vector<int>);
std::vector<double> sort_for_integers_only(std::vector<double> data);

//place your method name here
std::vector<int> quick_sort_by_gerasimoff(std::vector<int> sort);
std::vector<double> quick_sort_by_gerasimoff(std::vector<double> sort);

std::vector<int> tim_sort_by_shilakin(std::vector<int> sort);
std::vector<double> tim_sort_by_shilakin(std::vector<double> sort);

std::vector<int> merge_sort_by_vasiutin(std::vector<int> sort);
std::vector<double> merge_sort_by_vasiutin(std::vector<double> sort);