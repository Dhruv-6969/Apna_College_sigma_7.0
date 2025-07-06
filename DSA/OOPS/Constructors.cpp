#include <iostream>
using namespace std;

class Car
{

private:
    string name;
    string color;

public:
    Car()
    {
        cout<<"I am Non Parameterized constructor\n";
    }

    Car(string name, string color){
        cout<<"I am Parameterized constructor\n";
        this->name = name;
        this->color = color;
    }

    string getName(){
        return name;
    }
};

int main()
{
    Car c1;
    Car c2("Alcazar", "Navy Blue");

    cout << c2.getName() << endl;
    return 0;
}