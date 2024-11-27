#include <iostream>
using namespace std;

// Function to print all the values in the array column wise
void printColumnWise(int arr[][3], int rows, int cols)
{
    for (int j = 0; j < cols; j++)
    {
        for (int i = 0; i < rows; i++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    // create 2d array
    int arr[4][3] = {1, 2, 3,
                     4, 5, 6,
                     7, 8, 9,
                     15, 16, 18};

    // print all the values in the array column wise, function call
    printColumnWise(arr, 4, 3);
}