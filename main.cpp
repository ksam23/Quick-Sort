#include <iostream>
#include <vector>
// #include <ctime>
#include "QuickSort.h"
using namespace std;

int main(){
   // srand(time(0));

    int total;
    cin >> total;

    //fills array with input values
    vector<int> arr(total);
    for(int i = 0; i < total; i++){
        cin >> arr[i];
    }

    quickSort(arr, 0, total - 1);

    //prints sorted array
    cout << "Total: "<< total << endl;
    for(int i = 0; i < total; i++){
        cout << arr[i] << endl;
    }
}