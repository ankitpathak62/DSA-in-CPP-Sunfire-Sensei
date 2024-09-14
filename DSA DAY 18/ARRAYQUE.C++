#include<iostream>
using namespace std;

int main(){

  //
  int arr[8] = {123,65,98,45,75,68,987,415};
  //swap of array
  
  int i=0,j=7;
  while (i<j){
    swap(arr[i],arr[j]);
    i++;
    j--;
  }
  for(int i=0;i<8;i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}