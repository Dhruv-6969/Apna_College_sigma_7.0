// Write a program to calculate the area of a circle. Input: r(radius)  Output: PI*r*r(area)

#include <iostream>
using namespace std;
#define PI 3.14

int main(){
    float area, r;

    cout<<"Enter the radius of the circle: ";
    cin>> r;

    area = PI*r*r;

    cout<<"Area = "<<area;
}