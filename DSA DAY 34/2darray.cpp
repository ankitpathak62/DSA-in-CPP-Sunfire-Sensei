#include <iostream>

#include <climits> // for INT_MIN
using namespace std;

void printrowmax(int arr[][5], int rows, int cols)
{
    int maxSum = INT_MIN;
    int maxRowIndex = -1;
    for (int i = 0; i < rows; i++)
    {
        int total_sum = 0;
        for (int j = 0; j < cols; j++)
        {
            total_sum += arr[i][j];
            if (total_sum > maxSum)
            {
                maxSum = total_sum;
                maxRowIndex = i;
            }
        }
    }
    cout << "Maximum sum of row " << maxRowIndex;
}
int main()
{

    int arr[4][5] = {{22221, 2, 39, 44, 45},
                     {6, 7, 118, 99, 50},
                     {11, 152, 113, 14, 15},
                     {16, 147, 118, 2219, 20}};

    // print row index of maximum sum
    printrowmax(arr, 4, 5);
}