#include <iostream>
using namespace std;


bool linearSearch(int arr[], int x, int index, int size){
// /base case
    if(index == size) {
        cout << "Element not found" << endl;
        return false;
    }


    if(arr[index] == x) {
        cout << "Element found at index: " << index << endl;
        return true;
    }
    return linearSearch(arr, x, index + 1, size);
    
}

int main()
{
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int x = 20;
     
    cout<<linearSearch(arr, x, 0, 10);
}
 

