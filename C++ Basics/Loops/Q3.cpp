// WAP to input a number and check whether the number is an Armstrong number or not.

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n, sum = 0, count = 0;

    cout<<"Enter a number:- ";
    cin>> n;

    int k = n;

    while(k>0){
        count ++;
        k = k/10;
    }
    
    k = n;

    while(k>0){
        int digit = k%10;
        sum += round(pow(digit, count));
        k = k/10;
    }

    if(sum == n){
        cout<< "Its an Armstrong Number";
    }
    else{
        cout<<"Not an Armstrong Number";
    }
}