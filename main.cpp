#include <iostream>
#include <vector>
#include "QuickSort.h"
using namespace std;

int main(){
    int total;
    cin >> total;

    vector<int> arr(total);
    for(int i = 0; i < total; i++){
        cin >> arr[i];
    }

    quickSort(arr, 0, total - 1);

    cout << "Total: "<< total << endl;
    for(int i = 0; i < total; i++){
        cout << arr[i] << endl;
    }
}