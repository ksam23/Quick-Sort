#ifndef QUICKSORT_H
#define QUICKSORT_H

#include <vector>
using namespace std;

void quickSort(vector<int> arr, int low, int high);
int hoare_partition(vector<int> arr, int low, int high);
void swap(vector<int>& arr, int i, int j);

#endif