// hybrid_inheritance
#include <iostream>
using namespace std;
// student
class Student
{
public:
    void print()
    {
        cout << "I am Student " << endl;
    }
};

// male
class Male
{
public:
    void maleprint()
    {
        cout << "I am Male" << endl;
    }
};

// female
class FeMale
{
public:
    void femaleprint()
    {
        cout << "I am feMale" << endl;
    }
};

// boy
class Boy : public Male, public Student
{
public:
    void Boyprint()
    {
        cout << "I am a Boy Student" << endl;
    }
};
// girl
class Girl : public Student, public FeMale
{
public:
    void Girlprint()
    {
        cout << "I am a Girl Student" << endl;
    }
};

int main()
{
    Girl g1;
    g1.print();
    g1.femaleprint();
    g1.Girlprint();
}
