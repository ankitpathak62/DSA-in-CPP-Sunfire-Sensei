#include <iostream>
using namespace std;
int main()
{
    int L,B,H;
    cout << "Enter Length, Breadth and Height of the 3D array : ";
    cin >> L >> B >> H;
    int ***ptr = new int**[L];
    //create a 2d array and assign it to each pointer in the 1D array
    for( int i = 0; i < L; i++ ){
        ptr[i] = new int*[B];
        for( int j = 0; j < B; j++ ){
            ptr[i][j] = new int[H];
        }
    }
    //input the elements of the 3D array
    cout << "Enter the elements of the 3D array : " << endl;
    for( int i = 0; i < L; i++ ){
        for( int j = 0; j < B; j++ ){
            for( int k = 0; k < H; k++ ){
                cout << "Element at [" << i << "][" << j << "][" << k << "] : ";
                cin >> ptr[i][j][k];
            }
        }
    }
    //output the elements of the 3D array
    cout << "The elements of the 3D array are : " << endl;
    for( int i = 0; i < L; i++ ){       
        for( int j = 0; j < B; j++ ){
            for( int k = 0; k < H; k++ ){
                cout << "Element at [" << i << "][" << j << "][" << k << "] : "
                        << ptr[i][j][k] << endl;
            }
        }
    }
    //deallocate the memory
    for( int i = 0; i < L; i++ ){
        for( int j = 0; j < B; j++ ){
            delete[] ptr[i][j]; // delete each 1D array
        }
        delete[] ptr[i]; // delete each 2D array
    }
    delete[] ptr; // delete the 1D array of pointers
}