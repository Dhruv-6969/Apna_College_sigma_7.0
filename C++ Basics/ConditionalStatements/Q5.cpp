// For any 3 digit number check whether it’s an Armstrong number or not. Armstrong number is a number that is equal to the sum of cubes of its digits. Eg:371 is an armstrong number. 3 * 3 * 3 + 7 * 7 * 7 + 1 * 1 * 1 = 371

#include <iostream>
using namespace std;

int main(){
    int n;
    int sum = 0;

    cout<<"Enter a 3 digit integer: ";
    cin>> n;

    int num = n;

    for(int i = 0; i<3; i++){
        sum = sum + ((n%10) * (n%10) * (n%10));
        n = n/10;
    }
    cout<<sum<<endl;
    if(sum == num){
        cout<<"Its an Armstrong number";
    }
    else{
        cout<<"Its not an Armstrong number";
    }
}