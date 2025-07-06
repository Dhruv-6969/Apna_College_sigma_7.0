#include <iostream>
using namespace std;

class Student{
private:
    string name;

public:
    float cgpa;

    void getPercentage(){
        cout << (cgpa*10) << "%" << endl;
    }
};

int main(){
    Student s1;
    //s1.name = "dhruv";
    s1.cgpa = 8.7;
    cout<< s1.cgpa <<endl;
    s1.getPercentage();
}