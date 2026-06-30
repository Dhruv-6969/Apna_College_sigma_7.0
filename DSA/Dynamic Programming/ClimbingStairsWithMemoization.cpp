#include <bits/stdc++.h>
using namespace std;

int climbingStairs(int n, vector <int> &f){
    if(n<=1){
        return 1;
    }
    if(f[n]!=-1){
        return f[n];
    }
    f[n] = climbingStairs(n-1, f) + climbingStairs(n-2, f);
    return f[n];
}

int main(){
    int n;
    cin >> n;
    vector <int> f(n+1, -1);

    cout << climbingStairs(n, f);
    return 0;
}