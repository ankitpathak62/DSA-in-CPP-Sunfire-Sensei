//static member function and static data member
#include <string>
#include <iostream>
using namespace std;

class User
{
    string name;
    int account_number;
    double balance;
    int age;
    static int user_count;
    static double total_deposit;
public:
    User(string na, int acc, double bal,int ag)
    {
        name = na;
        account_number = acc;
        balance = bal;
        age=ag;
        user_count++;
        total_deposit += bal;
    }
    static void display_total_static()
    {
        cout << "Total Users (static function): " << user_count << endl;
        cout << "Total Deposit (static function): $" << total_deposit << endl;
    }  
    void deposit(int amount)
    {
        if(amount > 0)
        {
            total_deposit += amount;
            balance += amount;
        }
    
    }
    void withdraw(int amount)
    {
        if(amount > 0 && amount <= balance)
        {
            total_deposit -= amount;
            balance -= amount;
        }
    }
    void update_age(int age)
    {
        if(age >0&& age<150)
        {
            this->age = age;
        }
        else
        {
            cout << "Invalid age. Age must be between 0 and 150." << endl;
        }
    }

    void display()
    {
        cout << "Name: " << name <<  endl
             << "Account Number: " << account_number << endl
                << "Age: " << age << endl
             << "Balance: $" << balance << endl
             << "Total Users: " << user_count << endl;
    }
    void display_total_users()
    {
        cout << "Total Users: " << user_count << endl;
    }
};
int User::user_count = 0;
double User::total_deposit = 0.0;
int main()
{
    
  
    User u1("Alice", 1001, 5000.0,25);
    User u2("Bob", 1002, 3000.0,25);    
    User u3("Kabir", 1003, 3000.0,12);
    u1.update_age(35);
    u1.display();
 
    User::display_total_static();
    

    
}

//Const HW