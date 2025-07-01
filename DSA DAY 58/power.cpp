#include <iostream>
using namespace std;

int pow1(int a, int n)
{
    // base case
    if (n == 0)
    {
        return 1; // a^0 = 1
    }
    // if (n == 1)
    // {
    //     return a;
    // }

    return a * pow1(a, n - 1);
}

int main()
{
    int n, m;
    cout << "Enter a number: ";
    cin >> m;
    cout << "Enter the power: ";
    cin >> n;
    cout << pow1(m, n) << endl;
}