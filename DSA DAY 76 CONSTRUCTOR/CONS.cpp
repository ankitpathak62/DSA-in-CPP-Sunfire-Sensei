#include <iostream>
using namespace std;

class User
{
    string name;
    int account_number;
    double balance;

public:
    User()
    {
        cout << "Default constructor called" << endl;
        name = "Ankit";
        account_number = 0;
        balance = 0.0;
    }
    User(string name, int account_number, double balance)
    {
        cout << "Parameterized constructor called" << endl;
        this->name = name;
        this->account_number = account_number;
        this->balance = balance;
    }
    User(string name, int account_number)
    {
        cout << "Parameterized constructor2 called" << endl;
        this->name = name;
        this->account_number = account_number;
        
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
    User u2("Mohit", 123456, 1000.50);
    User u3("Riya", 654321);
    u1.display();
    u2.display();
    u3.display();
}