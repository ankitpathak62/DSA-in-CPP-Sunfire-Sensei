#include <iostream>
using namespace std;

void swap_function(int *p1, int *p2) //pass by pointer
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
int main()
{
    int first = 10;
    int second = 20;
    // cout<< "Before Swapping" << endl;
    // cout << " Value of First = " << first << " " << " Value of Second = " << second << endl;
    // swap_function(&first, &second);
    // cout << "After Swapping" << endl;
    // cout << " Value of First = " << first << " " << " Value of Second = " << second << endl;



    //Reference variable
    int num= 50;
    int &ref = num; // ref is a reference to num( it mean both refer to the same memory location)
    // cout<< ref<< endl; 
    // //addressof ref
    // cout<< "address of ref ="<< &ref << endl; // Output will be the address of num, as ref is a reference to num
    // ref++;
    // cout<< num << endl; // Output will be 51, as ref is a reference to num
    // cout<< "address of num ="<< &num << endl; // Output will be the address of num


    
}