#include <iostream>
using namespace std;

int main()
{
    // create 2d array
    int arr[4][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 55, 99, 56, 15, 16, 18};

    int target = 51;
    // find the elements of the array
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            if (arr[i][j] == target){
                cout << "Element found at position (" << i << ", " << j << ")" << endl;
                return 0;
            }
        }
    }
    cout << "Element not found in the array" << endl;
    return 0;


    
}