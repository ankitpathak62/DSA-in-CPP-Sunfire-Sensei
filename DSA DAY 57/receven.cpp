#include<iostream>
using namespace std;

void printEven(int n,int N){
    // base case
    if(n>N){
        
        return;
    }
    cout<< n << " ";
    printEven(n + 2,N);
}

void printEvenOneArgument(int n){
    // base case
    if(n == 2){
        cout << n << " ";
        return;
    }
    
    printEvenOneArgument(n - 2);
    cout << n << " ";
}

int main(){
    ////print 1 to N even numbers using recursion
    int n;
    cout << "Enter a number: ";
    cin >> n;
    // if(n%2 == 1){
    //     n--;
    // }
    printEven(2,n);
    cout << endl;
    // print 1 to N even numbers using one argument recursion
    // printEvenOneArgument(n);
    return 0;
}