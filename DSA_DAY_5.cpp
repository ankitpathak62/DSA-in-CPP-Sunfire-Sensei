#include <iostream>
using namespace std;

int main() {
  // int i;
  // for(i=100 ; i <=200 ; i++){
  //   cout<<i<<" ";
  // }

  // print a to z
  // char letter;
  // for(letter='a' ; letter<='z' ; letter++){
  //   cout<<letter<<" ";
  // }

  // int i;
  // for(i=10 ; i>=0 ; i = i-1){
  //   cout<<i<<" ";
  // }

  // cout<<"Enter a number: ";
  // int num;
  // cin>>num;
  // for(int i = 1; i<=10;i=i+1){
  //   cout<<num<<" * "<<i<<" = "<<num*i<<endl;
  // }

  // find power of a number
  // int num, power, result=1;
  // cout << "Enter a number: ";
  // cin >> num;
  // cout << "Enter a power: ";
  // cin >> power;
  // for (int i = 1; i < power; i++) {
  //   result = result * num;
  // }
  // cout << result << endl;

  // sum of n numbers
  //  int sum=0;
  //  int n;
  //  cout<<"Enter a number: ";
  //  cin>>n;
  //   for(int i = 1; i<=num ; i=i+1){
  //     sum = sum + i;
  //   }
  // cout<<sum<<endl;

  // cout<<((n*(n+1))/2)<<endl;

  // int sum=0;
  //  int n;
  //  cout<<"Enter a number: ";
  //  cin>>n;
  //   for(int i = 1; i<=n ; i=i+1){
  //     sum = sum + i*i;
  //   }
  // cout<<sum<<endl;

  // Prime number
  //  int n;
  //  cout << "Enter a number: ";
  //  cin >> n;
  //  if (n < 2) {
  //    cout << "Not a prime number" << endl;
  //    return 0;
  //  } else {
  //    for (int i = 2; i < n; i++) {
  //      if (n % i == 0) {
  //        cout << "Not a prime number" << endl;
  //        return 0;
  //      }
  //    }
  //    cout << "prime number" << endl;
  //    return 0;
  //  }

  // fab series
  int n1 = 0, n2 = 1, n3, i, number;
  cout << "Enter the number of elements: ";
  cin >> number;
  cout << n1 << " " << n2 << " ";
  for (i = 2; i < number; ++i) {
    n3 = n1 + n2;
    cout << n3 << " ";
    n1 = n2;
    n2 = n3;
  }
  return 0;
}