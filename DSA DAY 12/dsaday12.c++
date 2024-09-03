#include <iostream>
using namespace std;

int main() {

  // int num;
  // cout << "Enter a number: ";
  // cin >> num;
  // int rem, ans = 0, mult = 1;
  // while (num > 0) {
  //   // reminder
  //   rem = num % 2;
  //   // quotient
  //   num /= 2;
  //   // ans
  //   ans += rem * mult;
  //   // mult
  //   mult *= 10;
  // }
  // cout << ans << endl;

  int num;
  cout << "Enter a number: ";
  cin >> num;
  int rem, ans = 0, mult = 1;
  while (num > 0) {
    // reminder
    rem = num % 10;
    // quotient
    num = num / 10;
    // ans
    ans = rem * mult + ans;
    // mult
    mult = mult * 2;
  }
  cout << ans << endl;
}