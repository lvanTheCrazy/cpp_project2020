#pragma once
#include <vector>
std::vector<int> MyGenerate(int size);
std::vector <int> GenerateBestDataRadixLSD(int size);
std::vector <int> GenerateWorstDataRadixLSD(int size);
std::vector <int> GenerateNormalDataRadixLSD(int size);
std::vector<int> GenerateNormalDataTimsort(int size);
std::vector<int> GenerateBestDataTimsort(int size);
std::vector<int> GenerateWorstDataTimsort(int size);

std::vector<int> GenerateBestDataQuicksort(int size);
std::vector<int> GenerateNormalDataQuicksort(int size);
std::vector<int> GenerateWorstDataQuicksort(int size);