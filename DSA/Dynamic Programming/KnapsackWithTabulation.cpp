#include <bits/stdc++.h>
using namespace std;

int knapsackTab(vector<int> val, vector<int> wt, int W, int n, vector<vector<int>> &dp){
    if(n == 0 || W == 0){
        return 0;
    }

    int itemVal = val[n-1];
    int itemWt = wt[n-1];

    if(dp[n][W] != -1){
        return dp[n][W];
    }

    if(itemWt <= W){
        //include
        int ans1 = knapsackTab(val, wt, W-itemWt, n-1, dp) + itemVal;
        //exclude
        int ans2 = knapsackTab(val, wt, W, n-1, dp);
        
        dp[n][W] = max(ans1, ans2);
    }
    else{
        //exclude
        dp[n][W] = knapsackTab(val, wt, W, n-1, dp);
    }
    return dp[n][W];
}

int main(){
    vector <int> val = {15, 14, 10, 45, 30};
    vector <int> wt = {2, 5, 1, 3, 4};
    int W = 7;
    int n = 5;

    vector<vector<int>> dp(n+1, vector<int> (W+1, -1));
    cout << knapsackTab(val, wt, W, n, dp);

    return 0;
}