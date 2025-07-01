#include <iostream>
using namespace std;

int fact(int n)
{
    // base case
    if (  n == 0)
    {
        return 1;
    }
    return n * fact(n - 1);
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (n < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
        return 1;
    }
    cout << "The factorial of " << n << " is: " << fact(n) << endl;
}