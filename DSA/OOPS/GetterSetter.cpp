#include <iostream>
using namespace std;

class Student{
private:
    string name;
    float cgpa;

public:
    void getPercentage(){
        cout << (cgpa*10) << "%" << endl;
    }

    //Setters
    void setName(string nameVal){
        name = nameVal;
    }

    void setcgpa(float cgpaVal){
        cgpa = cgpaVal;
    }

    //Getters
    string getName(){
        return name;
    }

    float getcgpa(){
        return cgpa;
    }
};

int main(){
    Student s1;
    s1.setName("Dhruv");
    s1.setcgpa(8.7);
    
    cout << s1.getName() << endl;
    cout << s1.getcgpa() << endl;
    s1.getPercentage();
}