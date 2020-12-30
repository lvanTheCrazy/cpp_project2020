// sort_race.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <vector>
#include <chrono>
#include <algorithm>
#include <string>
#include <iostream>
#include "DataSetRegister.h"
#include "Participants.h"
#include <regex>

using namespace std;

string ParseName(string& method_name)
{
    transform(method_name.begin(), method_name.end(), method_name.begin(),
        [](unsigned char c) { return std::tolower(c); });
    
    auto res = regex_replace(method_name, std::regex("_by_"), "\t");
    if (res.length() == method_name.length())
    {
        res = regex_replace(res, std::regex("by"), "\t");
        if (res.length() == method_name.length())
            res = regex_replace(res, std::regex("_"), "\t");
    }
    return res;
}

#define RUN(x) {                \
    Run(#x, x, data);           \
}


static string team = "";
static string dataset = "";

template <typename T>
void Run(string method_name, Participant<T> p, vector<T> data)
{
    auto start = chrono::system_clock::now();
    vector<T> res = p(data);
    auto stop = chrono::system_clock::now();
    auto time = chrono::duration_cast<chrono::microseconds>(stop - start).count();

    cout << "\"" << dataset << "\"\t"
        << data.size() << "\t"
        << team << "\t"
        << ParseName(method_name) << "\t"
        << ((data.size() == res.size() && is_sorted(res.begin(), res.end())) ? to_string(time) : "-1") << endl;
}

int main()
{
    {
        cout << endl << "**************INTEGER RACE**************" << endl << endl;

        auto intDataSets = GenerateIntDataSets();
        while (!intDataSets.empty())
        {
            auto& ds = intDataSets.top();
            dataset = ds.description;
            auto& data = ds.data;

            team = "std";
            RUN(sort_by_std);
            team = "AhmatzyanovTeam";
            RUN(binaryheap_by_Salikhova);
            RUN(tim_sort_by_Taishev);
            RUN(quickSort_by_Ahmatzyanov);
            RUN(merge_sort_by_Burlin);
            RUN(combSort_by_Ismailova);
            team = "ShuranskyTeam";
            RUN(MergeSortByShuranskiy);
            RUN(QuickSort_Pashayan);
            RUN(HeapSortByGabrielian);
            RUN(BitonicSortBySharnin);
            team = "Shekhovtsova_team";
            RUN(RadixSort_by_Shekhovtsova);
            RUN(QuickSort_Efimenko);
            RUN(TreeSortByIssabek);
            RUN(CombSortBySuleimenovaZH);
            team = "KononenkoTeam";
            RUN(CombSortByKononenko);
            RUN(ShellSort_by_Skriplyuk);
            RUN(mergeSortByMalakhov);
            RUN(quickSortbyMaltsev);
            team = "TkachevTeam";
            RUN(countingSortByTkachev);
            RUN(QuickSortByKaryagin);
            RUN(merge_sort_by_Kotova);
            RUN(HeapSortByKulagina);
            team = "BadeevTeam";
            RUN(MergeSort_by_Badeev);
            RUN(int_QuickSort_by_Knyazkin);
            RUN(CombSortInt_Schekotovskaya);
            RUN(ShakerSort_Tolstykh);
            team = "LaputinTeam";
            RUN(HeapSortBotUp_by_Laputin);
            RUN(QuickSort_by_Ageenko);
            RUN(RadixSortLSD_by_Absalyamov);
            RUN(Timsort_by_Seregin);
            RUN(Merge_sort_by_Niyazmuhammedow);
            team = "DanilovaTeam";
            RUN(merge_sort_by_danilova);
            RUN(InsertionSort_Stepuro);
            RUN(heapsort_by_makarov);
            RUN(QuickSort_by_Byankina);
            RUN(SelectionSort_by_Igoshkina);
            team = "SimonovTeam";
            RUN(quicksort_By_Simonov);
            RUN(shellsort_By_Chiganov);
            RUN(insertsort_by_Safonov);
            RUN(mergeSort_by_Pulkov);
            RUN(smooth_Samedov);
            team = "ShilakinTeam";
            RUN(quick_sort_by_gerasimoff);
            RUN(tim_sort_by_shilakin);
            RUN(merge_sort_by_vasiutin);
            team = "KirillovTeam";
            RUN(ShellSort_Kirillov);
            RUN(QuickSort_Makeev);
            RUN(InsertSoft_Afanasev);
            RUN(Combsort_Dimova);
            RUN(SelectSort_Klisunova);
            team = "PolyakovTeam";
            RUN(merge_sort_by_iliushik);
            RUN(heapsort_by_polyakov);
            RUN(quick_sort_by_Shabalinov);
            RUN(shellsort_by_kamenshchikov);

            intDataSets.pop();
        }
    }
    {
        cout << endl << "**************DOUBLE RACE**************" << endl << endl;
        auto doubleDataSets = GenerateDoubleDataSets();
        while (!doubleDataSets.empty())
        {
            auto& ds = doubleDataSets.top();
            dataset = ds.description;
            auto& data = ds.data;

            //RUN(sort_for_integers_only);
            team = "AhmatzyanovTeam";
            RUN(binaryheap_by_Salikhova);
            RUN(tim_sort_by_Taishev);
            RUN(quickSort_by_Ahmatzyanov);
            RUN(merge_sort_by_Burlin);
            team = "ShuranskyTeam";
            RUN(MergeSortByShuranskiy);
            RUN(QuickSort_Pashayan);
            RUN(HeapSortByGabrielian);
            RUN(BitonicSortBySharnin);
            team = "Shekhovtsova_team";
            RUN(RadixSort_by_Shekhovtsova);
            RUN(QuickSort_Efimenko);
            RUN(TreeSortByIssabek);
            RUN(CombSortBySuleimenovaZH);
            team = "KononenkoTeam";
            RUN(CombSortByKononenko);
            RUN(ShellSort_by_Skriplyuk);
            RUN(mergeSortByMalakhov);
            RUN(quickSortbyMaltsev);
            team = "TkachevTeam";
            RUN(countingSortByTkachev);
            RUN(QuickSortByKaryagin);
            RUN(merge_sort_by_Kotova);
            RUN(HeapSortByKulagina);
            team = "BadeevTeam";
            RUN(MergeSort_by_Badeev);
            //RUN(double_QuickSort_by_Knyazkin);
            RUN(CombSortDouble_Schekotovskaya);
            RUN(ShakerSortdouble_Tolstykh);
            team = "LaputinTeam";
            RUN(HeapSortBotUp_by_Laputin);
            RUN(QuickSort_by_Ageenko);
            RUN(RadixSortLSD_by_Absalyamov);
            RUN(Timsort_by_Seregin);
            RUN(Merge_sort_by_Niyazmuhammedow);
            team = "DanilovaTeam";
            RUN(merge_sort_by_danilova);
            RUN(InsertionSort_Stepuro);
            RUN(heapsort_by_makarov_d);
            RUN(QuickSort_by_Byankina);
            RUN(SelectionSort_by_Igoshkina);
            team = "SimonovTeam";
            RUN(quicksort_By_Simonov);
            RUN(shellsort_By_Chiganov);
            RUN(insertsort_by_Safonov);
            RUN(mergeSort_by_Pulkov);
            team = "ShilakinTeam";
            RUN(quick_sort_by_gerasimoff);
            RUN(tim_sort_by_shilakin);
            RUN(merge_sort_by_vasiutin);
            team = "KirillovTeam";
            RUN(ShellSort_Kirillov);
            RUN(QuickSort_Makeev);
            RUN(InsertSoft_Afanasev);
            RUN(Combsort_Dimova);
            RUN(SelectSort_Klisunova);
            team = "PolyakovTeam";
            RUN(merge_sort_by_iliushik);
            RUN(heapsort_by_polyakov);
            RUN(quick_sort_by_Shabalinov);
            RUN(shellsort_by_kamenshchikov);

            doubleDataSets.pop();
        }
    }
}
