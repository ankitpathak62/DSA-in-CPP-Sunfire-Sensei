#include <iostream>
using namespace std;

bool binarySearch(int arr[], int x, int start, int end)
{
    // base case
    if (start > end)
    {
        cout << "Element not found" << endl;
        return false;
    }
    int mid = start + (end - start) / 2;
    if(arr[mid] == x){
        cout << "Element found at index: " << mid << endl;
        return true;
    }
    else if (arr[mid] > x)
    {
        return binarySearch(arr, x, start, mid - 1);
    }
    else{
        return binarySearch(arr, x, mid + 1, end);
    }
}
int main()
{
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int x = 10;
    int size = sizeof(arr) / sizeof(arr[0]);
    cout<<binarySearch(arr, x, 0, size - 1);
}