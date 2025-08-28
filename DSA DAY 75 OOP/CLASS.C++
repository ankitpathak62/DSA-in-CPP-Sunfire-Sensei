#include <iostream>
using namespace std;

class Student
{
public:
//access modifiers
// public, private, protected


    string name;
    int age, roll;
    string grade;
};

int main()
{
    Student s1;
    s1.name = "John";
    s1.age = 20;
    s1.roll = 101;
    s1.grade = "A";
    Student s2;
    s2.name = "Doe";
    s2.age = 21;    
    s2.roll = 102;
    s2.grade = "B"; 
    cout << "Age: " << s1.age << endl;  
    s1.age = 21;
    cout << "Age: " << s1.age << endl;  
    
    return 0;

}