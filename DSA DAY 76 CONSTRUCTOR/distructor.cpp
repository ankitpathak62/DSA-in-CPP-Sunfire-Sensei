// write a program to demonstrate the use of destructor in c++
#include <iostream>
using namespace std;

class User
{
    string name;
    int *data;

public:
User(){

}
    User(string n)
    {
        name = n;
        cout << "Constructor called " << name << endl;
        data = new int; // dynamically allocate memory
        *data = 0;      // initialize the first element
    }
    // destructor
    ~User()
    {
        cout << "Destructor called " << name << endl;
        delete data; // free the allocated memory
    }
};
int main()
{
    User u1("1");
    User u2("2");
    User u3("3");
    User u4("4");
    User *u5 = new User; // dynamically allocate memory
    delete u5;           // free the allocated memory
    return 0;
}
