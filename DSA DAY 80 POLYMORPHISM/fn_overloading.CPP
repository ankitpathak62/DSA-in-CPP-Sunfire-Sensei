#include <iostream>
using namespace std;

class Area
{
public:
    int calculatearea(int l, int b)
    {
        return l * b;
    }
    int calculatearea(int r)
    {
        return 3.14 * r * r;
    }
};

int main()
{
    Area a1, a2;
    cout << "Area of rectangle: " << a1.calculatearea(5, 6) << endl;
    cout << "Area of circle: " << a2.calculatearea(5) << endl;
    return 0;
}