#include <iostream>
using namespace std;
void print(int arr[], int i, int n)
{
    // base case
    if (i == n)
    {
        return;
    }

    cout << arr[i] << " ";
    print(arr, i + 1, n);
}
//function using recursion to print array in reverse order
void print1(int arr[], int i, int n)
{
    // base case
    if (i == n)
    {
        return;
    }

    print1(arr, i + 1, n);
    cout << arr[i] << " ";
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    cout << "Printing array in normal order using 3 arguments: ";
    print(arr, 0, 5);
    cout << "\nPrinting array in reverse order using 3 arguments: ";
    print1(arr, 0, 5);
}