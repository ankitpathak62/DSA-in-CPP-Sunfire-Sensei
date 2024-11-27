#include <iostream>
using namespace std;

int main()
{
    // sum of 2 2d array with 4 row and 5 column
    int arr1[4][5] = {{1, 2, 3, 4, 5},
                      {6, 7, 8, 9, 10},
                      {11, 12, 13, 14, 15},
                      {16, 17, 18, 19, 20}};

    int arr2[4][5] = {{2, 3, 4, 5, 6},
                      {7, 8, 9, 10, 11},
                      {12, 13, 14, 15, 16},
                      {17, 18, 19, 20, 21}};

    int sum[4][5];

    // calculate sum of corresponding elements
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    // display the sum array
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }
}