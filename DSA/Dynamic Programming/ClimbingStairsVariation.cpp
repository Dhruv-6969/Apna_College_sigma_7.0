#include <bits/stdc++.h>
using namespace std;

int climbingVariation(int n){
    vector <int> f(n+1, -1);

    f[0] = 1;
    f[1] = 1;
    f[2] = 2;

    for(int i = 3; i<=n; i++){
        f[i] = f[i-1] + f[i-2] + f[i-3];
    }
    return f[n];
}

int main(){
    int n;
    cin >> n;

    cout << climbingVariation(n) << endl;
    return 0;
}