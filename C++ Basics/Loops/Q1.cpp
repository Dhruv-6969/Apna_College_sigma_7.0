//WAP to find the Factorial of a number entered by the user.

#include <iostream>
using namespace std;

int main(){
    int n;
    int fact = 1;
    cout<< "Enter the number:- ";
    cin>> n;

    for(int i = n; i>=1; i--){
        fact = fact * i;
    }

    cout<< "Factorial = "<< fact;
}