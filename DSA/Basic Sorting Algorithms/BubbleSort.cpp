#include <iostream>
using namespace std;

void PrintArray(int *arr, int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<", ";
    }
}

void BubbleSort(int *arr, int n){
    bool isSwap = false;
    for (int i = 0; i <n-1; i++){
        for(int j = 0; j<n-i-1; j++){
            if(arr[j]> arr[j+1]){
                swap(arr[j], arr[j+1]);
                isSwap = true;
            }
        }
        if(!isSwap){
            //array is already sorted
            return;
        }
    }
    PrintArray(arr, n);
}

int main(){
    int arr[] = {5, 4, 1, 2, 3};
    int n = sizeof(arr)/sizeof(int);

    BubbleSort(arr, n);

    return 0;
}