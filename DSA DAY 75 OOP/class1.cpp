#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int age, roll;
    string grade;
//Getter and Setter functions
public:
    void setName(string n)
    {
        if(n.size()==0)
        {
            cout<<"Name cannot be empty"<<endl;
            return;
        }
        name = n;
    }
    void setAge(int a)
    {
        if(a<0)
        {
            cout<<"Age cannot be negative"<<endl;
            return;
        }
        age = a;
    }
    void setRoll(int r)
    {
        roll = r;
    }
    void setGrade(string g)
    {
        grade = g;
    }
    string getName()
    {
        return name;
    }
    void getAge()
    {
        cout<< age<<" years ";
    }
    int getRoll()
    {
        return roll;
    }
    string getGrade(int pin)
    {
        if(pin==1234)
        {
            
            return grade;
        }
        else
        {
            return "Access Denied";
        }

    }
};

int main()
{
    Student s1;
    s1.setName("Ankit");
    s1.setAge(20);
    s1.setRoll(101);
    s1.setGrade("A");
    cout << "Name: " << s1.getName() << endl;
    cout << "Age: "; 
    s1.getAge();
    cout << endl;
    cout << "Roll: " << s1.getRoll() << endl;
    cout << "Grade: " << s1.getGrade(1234) << endl;
}