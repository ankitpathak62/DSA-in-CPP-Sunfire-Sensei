#include <iostream>
using namespace std;
int sum(int arr[], int i, int n)
{
    // base case
    if (i == n)
    {
        return 0;
    }

    return arr[i] + sum(arr, i + 1, n);
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int n = 5;
    cout << "Sum of array elements: " <<
    sum(arr, 0, n);
}