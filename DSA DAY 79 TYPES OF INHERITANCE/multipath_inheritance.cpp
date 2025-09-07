// multipath_inheritance
#include <iostream>
using namespace std;
class Human
{
public:
    string name;
    int age;
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};
class Engineer : public virtual Human
{

public:
    string specilization;

    void work()
    {
        cout << "I have specilization in " << specilization << endl;
    }
};
class Youtuber : public virtual Human
{
public:
    string channelName;
    int subscribers;

    void earn()
    {
        cout << "My channel name is " << channelName << " and I have " << subscribers << " subscribers" << endl;
    }
};
class TechYoutuber : public Engineer, public Youtuber
{
public:
    int salary;
    TechYoutuber(string name, int age, string specilization, string channelName, int subscribers, int salary)
    {
        this->name = name;
        this->age = age;
        this->specilization = specilization;
        this->channelName = channelName;
        this->subscribers = subscribers;
        this->salary = salary;
    }
    TechYoutuber() {

    };
    void intro()
    {
        cout << "I am a TechYoutuber" << endl;
    }
};
int main()
{
    TechYoutuber t1("Ankit", 20, "C++", "Sunfire sensei", 100000, 50000);
    t1.intro();
    t1.display();
    t1.work();
    t1.earn();
    cout << "My salary is " << t1.salary << endl;
}