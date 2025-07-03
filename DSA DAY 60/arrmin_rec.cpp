#include <iostream>
using namespace std;

int minimumelement(int arr[], int i, int n)
{
    //base case
    if (i == n - 1)
    {
        return arr[i];
    }
    return min(arr[i], minimumelement(arr, i + 1, n));
}

int main()
{
    int arr[5] = {201, 52, 103, 104, 51};
    int n = 5;
    cout << "Minimum element in the array: ";
   cout<< minimumelement(arr, 0, n);
}