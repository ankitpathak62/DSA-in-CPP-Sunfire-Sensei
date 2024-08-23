#include <iostream>
using namespace std;

int main() {

  // int row, col;
  // for(row=1; row<=5; row++){
  //   for(col=1; col<=row; col++){
  //     cout << "*";
  //   }
  //   cout << endl;
  // }

  // int row, col;
  // for(row=1; row<=15; row= row+1){
  //   for(col=1; col<=row; col++){
  //     cout << col<< " ";
  //   }
  //   cout << endl;
  // }

  // int row, col;
  // for(row=1; row<=6; row++){
  //   //print row nu row times
  //   for(col=1; col<=row; col++){
  //     cout<<row;
  //   }

  //   cout<<endl;
  // }

  // int row,col;
  //   for(row=1;row<=10;row++){
  //   for(col=row; col>=1;col--){
  //     cout<<col<<" ";
  //   }
  //     cout<<endl;
  //   }

  // int col, row;
  // for (row = 1; row <= 4; row++) {

  //   char SS = 'a' + (row - 1);
  //   for (col = 1; col <= row; col++) {
  //     cout << SS;
  //   }
  //   cout << endl;
  // }

  // int col, row;
  // for (row = 1; row <= 7; row++) {
  //   for( col=1; col<= 7-(row-1); col++){
  //     cout<<"*"<<" ";
  //   }
  //   cout<< endl;
  // }

  
  // int col, row;
  // for (row = 8; row >= 1; row--) {
  //   for( col=1; col<= row ; col++){
  //     cout<<"*"<<" ";
  //   }
  //   cout<<endl;
  // }



  // int col, row;
  // for (row = 1; row <= 7; row++) {
  //   for( col=1; col<= 7-(row-1); col++){
  //     cout<<col<<" ";
  //   }
  //   cout<< endl;
  // }

  // int col, row;
  // for (row = 8; row >= 1; row--) {
  //   for( col=1; col<= row ; col++){
  //     cout<<col<<" ";
  //   }
  //   cout<<endl;
  // }

  // 5
  // 5 4
  // 5 4 3 
  // 5 4 3 2 
  // 5 4 3 2 1

  
int row, col;
  for(row=1; row<=5; row++){
    for(col=5; col>=5-row+1; col--){
      cout<< col<<" ";
    }
    cout<<endl;
  }








  
  
}