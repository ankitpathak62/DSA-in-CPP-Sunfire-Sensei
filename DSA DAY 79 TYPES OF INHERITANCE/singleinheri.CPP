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
    ~Human()
    {
        cout << "Human Destructor" << endl;
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
    ~Student()
    {
        cout << "Destructor" << endl;
    }
};
int main()
{
    Student s1("Aman", 21, 101, 50000);
    s1.display();
}