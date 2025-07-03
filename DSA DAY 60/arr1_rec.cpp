#include<iostream>
using namespace std;

void print(int arr[], int i) {
    // base case
    if (i == -1) {
        return;
    }
    print(arr, i - 1);
    cout << arr[i] << " ";
}
int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    cout << "Printing array using 2 arguments: ";
    print(arr, 4);
}