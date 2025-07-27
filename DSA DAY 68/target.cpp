#include <iostream>
using namespace std;
int subsum(int arr[], int i, int n, int sum)
{
    if (sum == 0)
    {
        return 1;
    }
    if (i == n || sum < 0)
    {
        return 0;
    }

    return subsum(arr, i + 1, n, sum) + subsum(arr, i, n, sum - arr[i]);
}

int main()
{
    int arr[] = { 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 6;
    cout<<subsum(arr, 0, n, sum);
}