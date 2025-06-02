#include <iostream>
using namespace std;

void TrappingRain(int *hieght, int n){
    int leftmax[n], rightmax[n];
    leftmax[0] = hieght[0];
    rightmax[n-1] = hieght[n-1];

    for(int i = 1; i<n; i++){
        leftmax[i] = max(leftmax[i-1], hieght[i-1]);
    }

    for(int i = n-2; i>=0; i--){
        rightmax[i] = max(hieght[i+1], rightmax[i+1]);
    }

    int waterTrapped = 0;
    for(int i = 0; i<n; i++){
        int currWater = min(leftmax[i], rightmax[i]) - hieght[i];

        if(currWater>0){
            waterTrapped += currWater;
        }
    }
    cout<<"Rainwater Trapped: "<< waterTrapped;
}

int main(){
    int hieght[] = {4, 2, 0, 6, 3, 2, 5};
    int n = sizeof(hieght)/ sizeof(int);

    TrappingRain(hieght, n);

    return 0;
}