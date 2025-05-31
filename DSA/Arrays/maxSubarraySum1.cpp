#include <iostream>
#include <climits>
using namespace std;

void SubarraySum1(int *arr, int n){
    int maxSum = INT_MIN;

    for(int start = 0; start<n; start++){
        for(int end = start; end<n; end++){
            int curSum = 0;
            for(int i = start; i<=end; i++){
                curSum += arr[i];
            }
            cout << curSum << ",";
            maxSum = max(maxSum, curSum);
        }
        cout<<endl;
    }
    cout<< "Maximum Sum of Subarray = "<< maxSum;
}

int main(){
    int arr[] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr)/sizeof(int);

    SubarraySum1(arr, n);
    return 0;
}