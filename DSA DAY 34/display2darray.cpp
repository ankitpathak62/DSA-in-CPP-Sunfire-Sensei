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
    }
}

int main()
{
    // create 2d array
    int arr[4][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 15, 16, 18};

    // display 2d array
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    // print all the values in the array column wise, function call
    printColumnWise(arr, 4, 3);
}