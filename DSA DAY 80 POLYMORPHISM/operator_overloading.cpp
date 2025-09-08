#include <iostream>
using namespace std;

class Number
{
    int real, img;

public:
    Number()
    {
    }
    Number(int real, int img)
    {
        this->real = real;
        this->img = img;
    }
    void display()
    {
        cout << real << " + i" << img << endl;
    }
    Number operator-(Number &n)
    {
        Number ans;
        ans.real = real - n.real;
        ans.img = img - n.img;
        return ans;
    }
};

int main()
{
    Number n1(5, 6);
    Number n2(3, 4);
    n1.display();
    n2.display();
    Number n3 = n1 - n2;

    n3.display();
    return 0;
}