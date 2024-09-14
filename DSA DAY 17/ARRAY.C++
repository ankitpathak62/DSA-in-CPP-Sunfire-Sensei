#include <iostream>
#include <limits.h>
using namespace std;

int main() {

  // int arr[5] ={1,2,5,6,89};
  // for(int i =0; i<5; i++){
  //     cout<<arr[i]<<endl;
  // }

  // int arr1[] ={1,2,5,6};
  // for(int i =0; i<4; i++){
  //     cout<<arr1[i]<<endl;
  // }

  // int size;
  // cout<<"Enter the size of array"<<endl;
  // cin>>size;
  // cout<<"ENter the elements of array : ";
  // int arr[1000];
  // for(int i =0; i<size; i++){
  //   cin>>arr[i];
  // }
  // cout<<"Output is : ";
  // for(int i =0; i<size; i++){
  //   cout<<arr[i]<<endl;
  // }

  // int arr[5] ={1,2,5,6,89};
  //  // cout<<arr[4];

  // cout<< sizeof(arr)/sizeof(arr[0]);
  // int arr[5] = {1, 2, 5, 6, 89};
  // int ans = INT_MIN;
  // for (int i = 0; i < 5; i++) {
  //   if (arr[i] > ans) {
  //     ans = arr[i];
  //   }
  // }
  //   cout << ans;
  int arr[5] = {1, 2, 5, 6, 89};
  int ans = INT_MAX;
  for (int i = 0; i < 5; i++) {
    if (arr[i] < ans) {
      ans = arr[i];
    }
  }
    cout << ans;
}