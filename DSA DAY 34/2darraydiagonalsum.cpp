#include <iostream>
using namespace std;

void sumDiagonalElements(int arr[][4], int row, int col)
{
    int sum_diagonal_1 = 0, sum_diagonal_2 = 0;
    // first diagonal sum
    int i = 0;
    while (i < row)
    {
        sum_diagonal_1 = sum_diagonal_1 + arr[i][i];
        i++;
    }
    // second diagonal sum
    i = 0;
    int j = col - 1;
    while (j >= 0)
    {
        sum_diagonal_2 = sum_diagonal_2 + arr[i][j];
        i++;
        j--;
    }
    cout << "Sum of first diagonal elements: " << sum_diagonal_1 << endl;
    cout << "Sum of second diagonal elements: " << sum_diagonal_2 << endl;
}
int main()
{

    int arr[4][4] = {{21, 2, 39, 44 },
                     {6, 7, 118, 99},
                     {11, 152, 113, 14},
                     {16, 147, 118, 219 }};

    // sum of diagonal elements of the matrix using functions

    sumDiagonalElements(arr, 4, 4);
}