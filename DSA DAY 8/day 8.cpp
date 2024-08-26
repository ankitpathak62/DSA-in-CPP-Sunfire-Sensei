#include <iostream>
using namespace std;

int main() {
  // int n, row, col;
  // cout << "Enter a number ";
  // cin >> n;
  // for (row = 1; row <= n; row++) {
  //   for (col = 1; col <= n - row; col++) {
  //     cout << " ";
  //   }
  //   for (col = 1; col <= row; col++) {
  //     cout << "*";
  //   }
  //   cout << endl;
  // }

  // int n, row, col;
  // cout << "Enter a number ";
  // cin >> n;
  // for (row = 1; row <= n; row++){
  //   for (col = 1; col <= n - row; col++){
  //     cout << " ";
  //   }
  //   for(col=1; col<= row;col= col+1){
  //     cout<< col;
  //   }
  //   cout<<endl;
  // }

  // local & global variable

  // int n ;
  // cout << "Enter a number ";
  // cin >> n;
  // for (int row = 1; row <= n; row++) {
  //   for (int col = 1; col <= n - row; col++) {
  //     cout << " ";
  //   }
  //   for (int col = 1; col <= row; col++) {
  //     cout << row;
  //   }
  //   cout << endl;
  // }

  // int n, row, col;
  // cout << "Enter a number ";
  // cin >> n;
  // for (row = 1; row <= n; row++){
  //   for (col = 1; col <= n - row; col++){
  //     cout << " ";
  //   }
  //   for(col=row;  col>= 1; col--){
  //       cout<< col;
  //   }
  //   cout<< endl;
  // }

  int n, col, row;
  char ch = 'A';
  cout << "Enter a number ";
  cin >> n;
  for (row = 1; row <= n; row++) {
    for (col = 1; col <= n - row; col++) {
      cout << " ";
    }
    for (ch = 'A'; ch <= 'A' + row - 1; ch++) {
      cout << ch;
    }
    cout << endl;
  }
}