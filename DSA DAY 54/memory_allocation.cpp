#include <iostream>
using namespace std;
int main()
{
    // variable heap allocation
    int *ptr = new int;
    *ptr = 10; //value assignment
    cout<< *ptr<<endl;

    float *fptr = new float;
    *fptr = 5.5; //value assignment
    cout << *fptr << endl;


    int n ;
    cout << "Enter the size of array: ";
    cin >> n;
    // array heap allocation
    int *arr = new int[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
    {
        arr[i] = i + 1; // value assignment
    }
    //printing the array
    cout << "Array elements are: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    //delete key word to free memory 
    delete ptr; // free single variable memory
    delete fptr;
    delete[] arr; // free array memory
}