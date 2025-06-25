#include <iostream>
using namespace std;

void pointer_function(int **ptr1)
{
     
    *ptr1 = *ptr1 + 10;
}
int main()
{
    int n = 10;
    int *ptr = &n;        // single pointer
    int **dptr = &ptr;    // double pointer
    int ***tptr = &dptr;  // triple pointer
    int ****fptr = &tptr; // quadruple pointer
    cout << ptr << endl;
    pointer_function(dptr);
    cout << ptr << endl;
}