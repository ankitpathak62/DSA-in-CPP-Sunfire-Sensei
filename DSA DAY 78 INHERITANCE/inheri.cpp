#include <iostream>
using namespace std;

class Human
{
public:
    string name;
    int age;
    int height;
};
class Student : private Human
{
private:
    int roll_no;
    int fees;

 
};
int main()
{
    Student A;
    A.name = "Ravi";
}