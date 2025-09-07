// hierarical_Inheritance
#include <iostream>
using namespace std;
class Human
{
protected:
    string name;
    int age;

public:
    Human(string n, int a)
    {
        name = n;
        age = a;
    }
    void work()
    {
        cout << "Human is working" << endl;
    }
    Human()
    {
        cout << "Human Default Constructor" << endl;
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};
class Student : public Human
{
    int rollNo;
    int fee;

public:
    Student(string n, int a, int r, int f) : Human(n, a)
    {

        rollNo = r;
        fee = f;
    }
    Student()
    {
        cout << "Default Constructor" << endl;
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Fee: " << fee << endl;
    }
};
class Teacher : public Human
{

    int salary;

public:
    Teacher(string n, int a, int s) : Human(n, a)
    {
        salary = s;
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Salary: " << salary << endl;
    }
};
int main()
{
    Student s1("Aman", 21, 101, 50000);
    s1.display();
    Teacher t1("Ravi", 45, 80000);
    t1.display();
}
