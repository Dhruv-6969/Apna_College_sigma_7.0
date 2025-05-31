//Slightly Optimized Approached
#include <iostream>
#include <climits>
using namespace std;

void SubarraySum1(int *arr, int n){
    int maxSum = INT_MIN;

    for(int start = 0; start<n; start++){
        int curSum = 0;
        for(int end = start; end<n; end++){
            curSum += arr[end];
            maxSum = max(maxSum, curSum);
        }
    }
    cout<< "Maximum Sum of Subarray = "<< maxSum;
}

int main(){
    int arr[] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr)/sizeof(int);

    SubarraySum1(arr, n);
    return 0;
}