// Build a Simple Interest Calculator. Input: principal(P), rate(R), time(T)   Output: (P*R*T)/100

#include <iostream>
using namespace std;

int main(){
    float si, p, r, t;

    cout<< "Enter the principal amount: ";
    cin>> p;
    cout<< "Enter the rate of interest: ";
    cin>> r;
    cout<< "Enter the time: ";
    cin>> t;

    si = (p*r*t)/100;

    cout<<"Your Simple Interest = "<< si;
}