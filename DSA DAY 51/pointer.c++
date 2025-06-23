#include<iostream>
using namespace std;
int main(){
int arr[5] = {1, 2, 3, 4, 5};
int *ptr = arr; // pointer to the first element of the array
//print the address of the first element


// cout << "Address of first element: " << arr << endl;
// cout << "Address of first element arr + 0: " << arr +0 << endl;
// cout << "Address of first element 0+arr : " << 0+arr<< endl;
// cout << "Address of first element &arr[0]: " << &arr[0]<< endl;

 
// cout << "Address of arr: " << ptr << endl;

//print the address of the second element
// cout << "Address of second element: " << arr + 1 << endl;
// cout << "Address of second element: " << ptr + 1 << endl;
// cout << "Address of first element &arr[0]: " << &arr[1]<< endl;


//value of first element
// cout << "Value of first element: " << arr[0] << endl;

// cout << "Value of first element: " << *arr << endl; 
// cout << "Value of first element: " << *ptr << endl;
// cout << "Value of first element: " << *(arr+0) << endl; 


// print all addressof array elements
for(int i = 0; i < 5; i++){
    cout << "Address of element " << i << ": " << arr + i << endl;
}

// print all values of array elements
for(int i = 0; i < 5; i++){
    cout << "Value of element " << i << ": " << *(arr + i) << endl;
}
}