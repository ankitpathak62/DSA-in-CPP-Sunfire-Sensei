#include<iostream>
using namespace std;
int main(){

    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr;  
    //Print all the values

    // for( int i =0; i<5;i++){
    //     cout<<ptr[i]<<" ";  
    // }
    // cout<<endl;
    // // print all the addresses
    // for( int i =0; i<5;i++){
    //     cout<<ptr+i<<" ";  
    // }

    //Arithmetic operations on pointers ptr++,ptr--

    //print all the values using pointer arithmetic
    // for(int i = 0; i < 5; i++){
    //     cout << *ptr <<endl; 
    //     ptr++; 
    // } 
    //print all the values from last using pointer arithmetic ptr--
    // for(int i = 0; i < 5; i++){
    //     ptr--; 
    //     cout << *ptr <<endl; 
    // }


    //Addition of two pointers
    ptr = ptr+4; // Move pointer to the last element
    cout << "Value at last element: " << *ptr << endl; // Print value at last element
    ptr= ptr-2;
    cout << "Value at second last element: " << *ptr << endl; // Print value at second last element
  
}