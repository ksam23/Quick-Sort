#include "QuickSort.h"
#include <vector>
#include <random>
using namespace std;

void quickSort(vector<int>& arr, int low, int high) {
	if(low < high){
        int q = hoare_partition(arr, low, high);
        //sort lower half, checks for array of size 0 or 1
        if(q > low){ 
            quickSort(arr, low, q);
        }
        //sort upper half, checks for array of size 0 or 1
        if (q + 1 < high){
            quickSort(arr, q + 1, high);
        }
    }
}

int hoare_partition(vector<int>& arr, int low, int high){
    //randomize pivot but put in spot of low for hoare
    int random = low + (rand() % (high - low + 1));
    swapNums(arr, low, random);

    int key = arr[low];
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

        //swaps number bigger than key with number smaller than key to correct side
        if( i < j){
            swapNums(arr, i, j);
        }
        else {
            return j;
        }
    }
}


void swapNums(vector<int>& arr, int i, int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}