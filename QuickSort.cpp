#include "QuickSort.h"
#include <vector>
#include <random>
using namespace std;

void quickSort(vector<int> arr, int low, int high) {
	if(low < high){
        int q = hoare_partition(arr, low, high);
        //sort lower half , since hoare partiton no need for q - 1
        quickSort(arr, low, q);
        //sort upper half
        quickSort(arr, q + 1, high);
    }
}

int hoare_partition(vector<int> arr, int low, int high){
    int key = arr[low + (rand() % (high - low + 1))];
    int i = low - 1;
    int j = high + 1;
    while(true){
        //starts from right and finds first element smaller than key
        do{ 
            j = j - 1;
        }
        while(arr[j] > key);

        //starts from left and finds first num bigger than key
        do{
            i = i + 1;
        }
        while(arr[i] < key);

        if( i < j){
            swap(arr, arr[i], arr[j]);
        }
        else {
            return j;
        }
    }
}


void swap(vector<int>& arr, int i, int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}