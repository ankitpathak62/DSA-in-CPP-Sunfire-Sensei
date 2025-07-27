#include <iostream>
using namespace std;
 
int subset(int arr[], int size, int index, int sum)
{
    if (index == size) { 
        return sum == 0 ? 1 : 0;
    } 
    return subset(arr, size, index + 1, sum) +
           subset(arr, size, index + 1, sum - arr[index]);
}

int main()
{
    int arr[] = { 2, 5, 6, 1,8,7,3 };  
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum = 8; // Target sum
    cout << subset(arr, size, 0, sum) << endl;
     
    return 0;
}
