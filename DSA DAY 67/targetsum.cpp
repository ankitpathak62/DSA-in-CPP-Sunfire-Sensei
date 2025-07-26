#include <iostream>
using namespace std;

bool check(int arr[], int index, int size, int target)
{
    if (target == 0)
    {
        return 1; // If target is reached, return true
    }
    if (index == size || target < 0)
    {
        return 0; // If we have considered all elements, check if target is reached
    }

    return check(arr, index + 1, size, target) || check(arr, index + 1, size, target - arr[index]);
}

int main()
{
    int arr[] = {3, 6, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 55;
    cout << check(arr, 0, size, target) << endl;
}