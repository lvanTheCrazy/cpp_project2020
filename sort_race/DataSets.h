#pragma once
#include <vector>
#include <string>

//datasets by TM
std::vector<int> GenerateData(int size, int max_value = INT_MAX);
std::vector<double> GenerateDoubleData();


//datasets by <comandname>
//place your datasets here 
//or include your "datasets_by_<comandname>.h" above

//datasets by Shekhovtsova_team
std::vector<int> Data1_by_Shekhovtsova_team();
std::vector<int> Data2_by_Shekhovtova_team(int size, int max_val = INT_MAX);
std::vector<int> Data3_by_Shekhovtsova_team(int size, int max_val = 10);
std::vector<int> Data4_by_Shekhovtsova_team(int size);


// Kononenko team 
std::vector<int> NegativeIntegerGenerateData(int size, int max_value = INT_MAX);
std::vector<double> NegativeDuobleGenerateData(double size, int max_value = INT_MAX);
std::vector<int> SemiSortedIntegerGenerateData(int size, int max_value = INT_MAX);
std::vector<double> SemiSortedDoubleGenerateData(double size, int max_value = INT_MAX);
std::vector<int> FullSortedIntegerGenerateData(int size, int max_value = INT_MAX);
std::vector<double> FullSortedDoubleGenerateData(double size, int max_value = INT_MAX);

//TkachevTeam
std::vector<int> BadForKaryaginTkachevTeam(int size);
//datasets by <Laputin>
std::vector <int> LaputinTeamGenerateBestDataRadixLSD(int size);
std::vector <int> LaputinTeamGenerateWorstDataRadixLSD(int size);
std::vector <int> LaputinTeamGenerateNormalDataRadixLSD(int size);

std::vector<int> LaputinTeamGenerateNormalDataTimsort(int size);
std::vector<int> LaputinTeamGenerateBestDataTimsort(int size);
std::vector<int> LaputinTeamGenerateWorstDataTimsort(int size);

std::vector<int> LaputinTeamGenerateBestDataQuicksort(int size);
std::vector<int> LaputinTeamGenerateNormalDataQuicksort(int size);
std::vector<int> LaputinTeamGenerateWorstDataQuicksort(int size);
//or include your "datasets_by_<comandname>.h" above



//datasets by Danilova
std::vector<int> ReadDataFromFileDanilova(std::string filename);
std::vector<double> GenerateDoublesDanilova(int size);

