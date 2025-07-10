#include <iostream>
using namespace std;

void PrintArray(int *arr, int n){
    for(int i = 0; i<n; i++){
        cout<< arr[i] << " ";
    }
    cout<< endl;
}

void changeArray(int arr[], int n, int i){
    if(i == n){
        PrintArray(arr, n);
        return;
    }

    arr[i] = i+1;
    changeArray(arr, n, i+1);
    arr[i] -= 2; //backtrack
}

int main(){
    int arr[5] = {0};
    int n = 5;

    changeArray(arr, n, 0);
    PrintArray(arr, n);
    return 0;
}