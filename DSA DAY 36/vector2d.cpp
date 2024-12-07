#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{

    // create 2d vector
    vector<vector<int>> matrix;

    int row, col;

    cout << "Enter number of rows : ";
    cin >> row;
    cout << "Enter number of columns : ";
    cin >> col;
    // create new 2d vector with size
    vector<vector<int>> matrix1(row, vector<int>(col, 12));

    // take input from user matrix1
    cout << "Enter elements of matrix: " << endl;
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            cin >> matrix1[i][j];

    // print 2d vector
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << matrix1[i][j] << " ";
        }
        cout << endl;
    }

    // find row and column size
    // int row1 = matrix1.size();
    // int col1 = matrix1[0].size();

    // cout << row1 << " " << endl;
    // cout << col1 << " ";
}