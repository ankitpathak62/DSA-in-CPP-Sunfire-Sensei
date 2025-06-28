#include <iostream>
using namespace std;
int main()
{
    // Array creation to store address 
    int row, col;
    cout << "Enter the number of rows: ";
    cin >> row;
    cout << "Enter the number of columns: ";
    cin >> col;

    int **ptr= new int *[row];
    // Create a 2D array dynamically
    for (int i = 0; i < row; i++)
    {
        ptr[i] = new int[col];
    }
    // Input values into the 2D array
    cout << "Enter the elements of the 2D array:" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> ptr[i][j];
        }
    }
    // Output the 2D array
    cout << "The 2D array is: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << ptr[i][j] << " ";
        }
        cout << endl;
    }
    // Deallocate memory
    for (int i = 0; i < row; i++)
    {
        delete[] ptr[i];
    }
    delete[] ptr;
    
}