#include <iostream>
#include <vector>
using namespace std;

vector<int> PairSum(vector<int> arr, int target){
    int start = 0, end = arr.size() -1;
    vector<int> ans;

    while(start < end){
        if(arr[start] + arr[end] == target){
            ans.push_back(start);
            ans.push_back(end);
            cout<< ans[0] << ", " << ans[1];
            return ans;
        }
        if(arr[start] + arr[end] > target){
            end--;
        }
        if(arr[start] + arr[end] < target){
            start++;
        }
    }
    cout<< "No Pair Sum Possible";
    return ans;
}

int main(){
    vector<int> vec = {2, 7, 11, 15};
    int target = 9;

    PairSum(vec, target);

    return 0;
}