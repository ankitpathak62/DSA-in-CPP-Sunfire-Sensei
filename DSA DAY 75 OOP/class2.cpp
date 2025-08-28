#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int age, roll;
    string grade;
};

int main()
{
    Student *S = new Student();
    S->name = "John";
    (*S).age = 20;
    S->roll = 101;
    S->grade = "A";

    cout << "Name: " << S->name << endl;
    cout << "Age: " << S->age << endl;  
    cout << "Roll: " << S->roll << endl;
    cout << "Grade: " << (*S).grade << endl;
    
}