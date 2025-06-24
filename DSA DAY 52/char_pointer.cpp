#include <iostream>
using namespace std;
int main()
{
    char arr[5] = {'1', '2', '3', '4'};
    char *ptr = arr;
    cout << static_cast<void*>(arr) << endl;
    // cout << (void *)ptr << endl;
    char kabir = 'a';
    char *ptr1 = &kabir;
    // cout << (void *)ptr1 << endl;
    
}