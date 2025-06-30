#include <iostream>
using namespace std;

void printNumbers(int n, int N)
{
    // base case
    if (n == N)
    {
        cout << n << " ";
        return;
    }
    cout << n << " ";
    printNumbers(n + 1, N);
}

void printNumbersOneArgument(int n)
{
    // base case
    if (n == 1)
    {
        cout << n << " ";
        return;
    }
    printNumbersOneArgument(n - 1);
    cout << n << " ";
}

int main()
{
    // Print 1 to N numbers using recursion
    int n;
    cout << "Enter a number: ";
    cin >> n;
    printNumbers(1,n);
    cout << endl;
    printNumbersOneArgument(n);
    return 0;
}