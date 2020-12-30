#pragma once
#include <vector>
#include"BitonicSort_Sharnin.h"
#include"MergeSort_Shuranskiy.h"
#include"HeapSort_Gabrielian.h"
#include"QuickSort_Pashayan.h"

template <typename T>
using Participant = std::vector<T>(*)(std::vector<T>);

std::vector<int> sort_by_std(std::vector<int>);
std::vector<double> sort_for_integers_only(std::vector<double> data);

//--------------------Team Polyakov---------------------------
std::vector<int> heapsort_by_polyakov(std::vector<int> to_sort);
std::vector<double> heapsort_by_polyakov(std::vector<double> to_sort);

std::vector<int> shellsort_by_kamenshchikov(std::vector<int> to_sort);
std::vector<double> shellsort_by_kamenshchikov(std::vector<double> to_sort);

std::vector<int> merge_sort_by_iliushik(std::vector<int> data);
std::vector<double> merge_sort_by_iliushik(std::vector<double> data);

std::vector<double> quick_sort_by_Shabalinov(std::vector<double> data);
std::vector<int> quick_sort_by_Shabalinov(std::vector<int> data);
//---------------------------------------------------------------

//--------------------Team Ahmatzyanov---------------------------
std::vector<int> binaryheap_by_Salikhova(std::vector<int> data);
std::vector<double> binaryheap_by_Salikhova(std::vector<double> data);
std::vector<int> tim_sort_by_Taishev(std::vector<int> data);
std::vector<double> tim_sort_by_Taishev(std::vector<double> data);
std::vector<int> quickSort_by_Ahmatzyanov(std::vector<int> data);
std::vector<double> quickSort_by_Ahmatzyanov(std::vector<double> data);
std::vector<int> merge_sort_by_Burlin(std::vector<int> data);
std::vector<double> merge_sort_by_Burlin(std::vector<double> data);
std::vector <int> combSort_by_Ismailova(std::vector<int> data);
//---------------------------------------------------------------

//--------------------Team Kononenko---------------------------
std::vector <int> CombSortByKononenko(std::vector<int> data);
std::vector <double> CombSortByKononenko(std::vector<double> data);
std::vector <int> ShellSort_by_Skriplyuk(std::vector<int> data);
std::vector <double> ShellSort_by_Skriplyuk(std::vector<double> data);
std::vector <int> mergeSortByMalakhov(std::vector<int> arr);
std::vector <double> mergeSortByMalakhov(std::vector<double> arr);
std::vector <int> quickSortbyMaltsev(std::vector<int> arr);
std::vector <double> quickSortbyMaltsev(std::vector<double> arr);

//Shekhovtsova_team
std::vector<int> RadixSort_by_Shekhovtsova(std::vector<int> data);
std::vector<int> QuickSort_Efimenko(std::vector<int> data);
std::vector<int> CombSortBySuleimenovaZH(std::vector<int> data);
std::vector<int> TreeSortByIssabek(std::vector<int> a);
std::vector<double> RadixSort_by_Shekhovtsova(std::vector<double> data);
std::vector<double> QuickSort_Efimenko(std::vector<double> data);
std::vector<double> CombSortBySuleimenovaZH(std::vector<double> data);
std::vector<double> TreeSortByIssabek(std::vector<double> a);

//Tkachev Team
std::vector<int> countingSortByTkachev(std::vector<int> data);
std::vector<double> countingSortByTkachev(std::vector<double> data);
std::vector<int> QuickSortByKaryagin(std::vector<int> data);
std::vector<double> QuickSortByKaryagin(std::vector<double> data);
std::vector<int> merge_sort_by_Kotova(std::vector<int> data);
std::vector<double> merge_sort_by_Kotova(std::vector<double> data);
std::vector<int>  HeapSortByKulagina(std::vector<int> data);
std::vector<double>  HeapSortByKulagina(std::vector<double> data);

//--------------------Team Badeev---------------------------
std::vector<int> MergeSort_by_Badeev(std::vector<int> mas);
std::vector<double> MergeSort_by_Badeev(std::vector<double> mas);
std::vector<int> CombSortInt_Schekotovskaya(std::vector<int> data);
std::vector<double> CombSortDouble_Schekotovskaya(std::vector<double> data);
std::vector<int> int_QuickSort_by_Knyazkin(std::vector<int> data);
std::vector<int> ShakerSort_Tolstykh(std::vector<int> data);
std::vector<double> ShakerSortdouble_Tolstykh(std::vector<double> data);

//std::vector<double> double_QuickSort_by_Knyazkin(std::vector<double> data);
//---------------------------------------------------------------

//--------------------Team Laputin---------------------------
#include "heap_sort_bottomup_by_Laputin.h"
#include "QuickSort_by_Ageenko.h"
#include "Merge_sort_by_Niyazmuhammedow.h"
#include "Timsort_by_Seregin.h"

std::vector<int> RadixSortLSD_by_Absalyamov(std::vector<int> data);
std::vector<double> RadixSortLSD_by_Absalyamov(std::vector<double> data);
//---------------------------------------------------------------
//--------------------Team Danilova---------------------------
std::vector<int> merge_sort_by_danilova(std::vector<int> data);
std::vector<double> merge_sort_by_danilova(std::vector<double> data);
std::vector<int> InsertionSort_Stepuro(std::vector<int> data);
std::vector<double> InsertionSort_Stepuro(std::vector<double> data);
std::vector<int> QuickSort_by_Byankina(std::vector<int> data);
std::vector<double> QuickSort_by_Byankina(std::vector<double> data);

// igoskina, selection
std::vector<int> SelectionSort_by_Igoshkina(std::vector<int> data);
std::vector<double> SelectionSort_by_Igoshkina(std::vector<double> data);

// makarov, heapsort
std::vector<int> heapsort_by_makarov(std::vector<int> data);
std::vector<double> heapsort_by_makarov_d(std::vector<double> data);
//--------------------Team Danilova---------------------------

//------------------------Team Simonov---------------------------
std::vector <int> quicksort_By_Simonov(std::vector<int> data);
std::vector <double> quicksort_By_Simonov(std::vector<double> data);
std::vector <int> shellsort_By_Chiganov(std::vector<int> data);
std::vector <double> shellsort_By_Chiganov(std::vector<double> data);
std::vector <double> insertsort_by_Safonov(std::vector<double> data);
std::vector <int> insertsort_by_Safonov(std::vector<int> data);
std::vector <double> mergeSort_by_Pulkov(std::vector<double> data);
std::vector <int> mergeSort_by_Pulkov(std::vector<int> data);
std::vector <int> smooth_Samedov(std::vector<int> data);

//---------------------------------------------------------------
//ShilakinTeam
std::vector<int> quick_sort_by_gerasimoff(std::vector<int> sort);
std::vector<double> quick_sort_by_gerasimoff(std::vector<double> sort);

std::vector<int> tim_sort_by_shilakin(std::vector<int> sort);
std::vector<double> tim_sort_by_shilakin(std::vector<double> sort);

std::vector<int> merge_sort_by_vasiutin(std::vector<int> sort);
std::vector<double> merge_sort_by_vasiutin(std::vector<double> sort);

//KirillovTeam
std::vector<int> ShellSort_Kirillov(std::vector<int> data);
std::vector<double> ShellSort_Kirillov(std::vector<double> data);
std::vector<int> QuickSort_Makeev(std::vector<int> data);
std::vector<double> QuickSort_Makeev(std::vector<double> data);
std::vector<int> InsertSoft_Afanasev(std::vector<int> data);
std::vector<double> InsertSoft_Afanasev(std::vector<double> data);
std::vector<int> Combsort_Dimova(std::vector<int> data);
std::vector<double> Combsort_Dimova(std::vector<double> data);
std::vector<int> SelectSort_Klisunova(std::vector<int> data);
std::vector<double> SelectSort_Klisunova(std::vector<double> data);
