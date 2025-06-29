#include <iostream>
using namespace std;

void printReverse(int n) {
    // base case
    if(n==1){
        cout << 1 << " ";
        return;
    }
   
    cout<< n << " ";
    printReverse(n - 1);
}

void printEven(int n) {
    // base case
    if (n==2){
        cout << 2 << " ";
        return;
    }
    cout  << n  ;
    cout<<endl;
    printEven(n - 2);
}


int main(){
    //print n to 1
    int n;
    cout << "Enter a number: ";
    cin >> n;
    // for (int i = n; i >= 1; i--) {
    //     cout<<i << " ";
    //     cout<< endl;
    // }
    // printReverse(n);
    // print n to 1 even numbers and n should be even
    printEven(n);
}