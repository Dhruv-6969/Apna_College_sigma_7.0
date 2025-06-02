//Kadane's Algorithm
#include <iostream>
#include <climits>
using namespace std;

void SubarraySum3(int *arr, int n){
    int maxSum = INT_MIN;
    int curSum = 0;
    for(int i = 0; i<n; i++){
        curSum += arr[i];
        maxSum = max(maxSum, curSum);
        if(curSum<0){
            curSum = 0;
        }
    }
    cout<< "Maximum Sum of Subarray = "<< maxSum;
}

int main(){
    int arr[] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr)/sizeof(int);

    SubarraySum3(arr, n);
    return 0;
}