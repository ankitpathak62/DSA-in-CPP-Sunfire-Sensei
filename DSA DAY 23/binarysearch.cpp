#include <iostream>
using namespace std;

int BinarySearch(int arr[], int n, int Element)
{
    int first_element = 0;
    int last_element = n - 1;
    int mid;

    while (first_element <= last_element)
    {
        mid = (first_element + last_element) / 2;

        if (arr[mid] == Element)
        {
            return mid;
        }
        else if (arr[mid] < Element)
        {
            first_element = mid + 1;
        }
        else
        {
            last_element = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int arr[100];
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int Element;
    cout << "Enter the element to search: ";
    cin >> Element;

    cout << BinarySearch(arr, n, Element) << endl;
    return 0;
}