#include <iostream>
using namespace std;
class Person
{
protected:
    string name;
    int age;

public:
    void introduction()
    {
        cout << "My name is " << name << ". I am " << age << " years old." << endl;
    }
};
class Employee : public Person
{
protected:
    int salary;
    int employeeID;

public:
    void employee_intro()
    {
        introduction();
        cout << "My employee ID is " << employeeID << " and my salary is " << salary << "." << endl;
    }
};
class Manager : public Employee
{
public:
    string department;
    Manager(string n, int a, int s, int id, string dept)
    {
        name = n;
        age = a;
        salary = s;
        employeeID = id;
        department = dept;
    }
    void manager_intro()
    {
        introduction();
        employee_intro();
        cout << "I manage the " << department << " department." << endl;
    }
};
int main()
{
    Manager mgr("Alice", 35, 75000, 1234, "Sales");
    mgr.manager_intro();
    
}