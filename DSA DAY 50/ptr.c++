#include<iostream>
using namespace std;

int main() {
    int a = 10;
    // //i want to print the address of a
    // cout << "Address of a: " << &a << endl;

    int *ptr = &a; // pointer to a
    // // i want to print the value of a using pointer
    // cout << "Add of a using pointer: " << ptr << endl;
    cout << "Value of a using pointer: " << *ptr << endl;



    double b = 20.5;
    // i want to print the address of b
    // cout << "Address of b: " << &b << endl;
    // double *ptr2 = &b; // pointer to b
    // i want to print the value of b using pointer
    // cout << "size of b using pointer: " << sizeof(ptr2) << endl;
}