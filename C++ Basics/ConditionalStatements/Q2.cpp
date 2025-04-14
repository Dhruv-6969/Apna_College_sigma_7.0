// Write a C++ program that takes a year from the user and print whether that year is a leap year or not.

#include <iostream>
using namespace std;

int main(){
    int year;

    cout<<"Enter the a year in 4-digits: ";
    cin>>year;

    if(year%4 == 0){
        cout<<"Leap Year";
    }
    else{
        cout<<"Not a Leap Year";
    }
}