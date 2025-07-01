#include <iostream>
using namespace std;

int sum(int n)
{
    // base case
    if (n == 1)
    {
        return 1;
    }
    return n * sum(n - 1);
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "The sum of first " << n << " natural numbers is: " << sum(n) << endl;
}