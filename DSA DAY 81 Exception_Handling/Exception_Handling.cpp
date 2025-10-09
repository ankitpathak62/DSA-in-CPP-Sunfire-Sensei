#include <iostream>
using namespace std;
class Customer
{
    string name;
    int age, balance, account_number;

public:
    Customer(string n, int a, int b, int an)
    {
        name = n;
        age = a;
        balance = b;
        account_number = an;
    };
    // deposite
    void deposite(int amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << amount << " rupess deposited successfully" << endl;
        }
        else
        {
            throw "Amount should be greater than 0\n";
        }
    };
    // withdraw
    void withdraw(int amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << amount << " rupess withdrawn successfully" << endl;
        }
        else if (amount < 0)
        {
            throw "Invalid amount to withdraw\n";
        }
        else
        {
            throw "Insufficient balance\n";
        }
    }
};
int main()
{
    Customer c1("Ankit", 30, 1000, 123456);
    try
    {
        c1.deposite(10);
        c1.withdraw(-11);
        c1.deposite(10);
    }
    catch (const char *msg)
    {
        cout << "Error: " << msg;
    }
}