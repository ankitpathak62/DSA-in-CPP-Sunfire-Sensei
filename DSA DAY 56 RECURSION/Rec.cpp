#include <iostream>
using namespace std;

void fn3(int n)
{
    // base case
    if (n == 0)
    {
        cout << "Happy Birthday!" << endl;
        return;
    }
    cout << n << " Days Left for the Birthday!" << endl;
    fn3(n - 1);
}

int main()
{
    int n = 50;

    // for ( int i=n; i >= 1; i--) {
    //     cout << i << " "<< "Days Left for the Birthday!" << endl;
    // }
    // cout << "Happy Birthday!" << endl;
    // return 0;

    // help of function
    fn3(n);

    return 0;
}