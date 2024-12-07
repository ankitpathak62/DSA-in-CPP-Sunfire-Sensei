#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void wave(int arr[][4], int row, int col)
{
    for (int j = 0; j < col; j++)
    {
        if (j % 2 == 0)
        {
            for (int i = 0; i < row; i++)
            {
                cout << arr[i][j] << " ";
            }
        }
        else
        {
            for (int i = row - 1; i >= 0; i--)
            {
                cout << arr[i][j] << " ";
            }
        }
    }
}

int main()
{
    int arr[4][4] = {{21, 2, 39, 44},
                     {6, 7, 118, 99},
                     {11, 152, 113, 14},
                     {16, 147, 118, 219}};
    // wave print with function
    wave(arr, 4, 4);
}