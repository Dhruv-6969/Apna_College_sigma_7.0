#include <iostream>
using namespace std;

class User
{

private:
    int id;
    string password;

public:
    string username;

    User(){
        "Non Parameterized";
    }

    User(int id){
        this->id = id;
    }

    void setPass(string password){
        this->password = password;
    }

    string getPassword(){
        return password;
    }
};

int main()
{
    User a(1234);
    a.setPass("hehe");
    a.username = "Dhruv";

    cout<< a.username << endl << a.getPassword() << endl;
    return 0;
}