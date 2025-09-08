#include <iostream>
#include <vector>
using namespace std;

class Animal
{
public:
    virtual void sound()=0; // pure virtual function
    //Abstract class
};
class Dog : public Animal
{
public:
    void sound()
    {
        cout << "Dog barks" << endl;
    }
};
class Cat : public Animal
{
public:
    void sound()
    {
        cout << "Cat meows" << endl;
    }
};

int main()
{
    // Animal *ptr;
    // ptr = new Dog();
    // ptr->sound(); // Outputs: Animal makes a sound

    Animal *p;
    vector<Animal *> v;
    v.push_back(new Dog());
    v.push_back(new Cat());
  
    v.push_back(new Cat());
    v.push_back(new Dog());


   


    for(int i = 0; i < v.size(); i++)
    {
        p = v[i];
        p->sound();
    }
}