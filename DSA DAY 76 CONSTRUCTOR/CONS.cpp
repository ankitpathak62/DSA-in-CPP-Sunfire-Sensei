#include <iostream>
using namespace std;

class User
{
    string name;
    int account_number;
    double balance;
    int *abc;

public:
    User()
    {
        cout << "Default constructor called" << endl;
        name = "Ankit";
        account_number = 0;
        balance = 0.0;
        abc = new int[100];
    }
    User(string name, int account_number, double balance)
    {
        cout << "Parameterized constructor called" << endl;
        this->name = name;
        this->account_number = account_number;
        this->balance = balance;
    }
    // Constructor Overloading
    User(string name, int account_number)
    {
        cout << "Parameterized constructor2 called" << endl;
        this->name = name;
        this->account_number = account_number;
    }
    // inline constructor
    // inline User(string a, int ac, double b) : name(a), account_number(ac), balance(b)
    // {
    //     cout << "Inline constructor called" << endl;
    // }

    // Copy Constructor
    User(User &u)
    {
        cout << "Copy constructor called" << endl;
        name = u.name;
        account_number = u.account_number;
        balance = u.balance;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Account Number: " << account_number << endl;
        cout << "Balance: $" << balance << endl;
    }
};

int main()
{
    User u1("Ankit", 987654, 500.25);
    User u2("Mohit", 123456, 1000.50); // open file
    User u3(u2);
    u1.display();
    cout << endl;
    u2.display();
    cout << endl;
    u3.display();
}