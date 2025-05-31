//WAP to print the multiplication table of a number, entered by the user.

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number:- ";
    cin>> n;

    for(int i = 1; i<= 12; i++){
        cout<< n << " x " << i << " = " << n*i << endl;
    }
}