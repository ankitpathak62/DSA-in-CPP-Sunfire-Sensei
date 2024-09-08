#include <iostream>
using namespace std;

// /function for sum of two numbers
int sum(int a, int b) {
  int ans = a + b;
  return ans;
}
// function for multiple of two numbers
int mult(int a, int b) {
  int ans = a * b;
  return ans;
}

// make a function of find factorial of a nuumber
int fact(int n) {
  int ans = 1;
  for (int i = 1; i <= n; i++) {
    ans = ans * i;
  }
  return ans;
}

// make a function to check the number is prime or not
bool isPrime(int n) {
  if (n < 2) {
    return false;
  }
  for (int i = 2; i < n; i++) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}

// make a function to check  a number is odd or even
bool isEven(int n) {
  if (n % 2 == 0) {
    return true;
  } else {
    return false;
  }
}

void fun1() { cout << " Sunfire Sensei"; }
void Sum(int a = 4, int b = 6) { cout << a + b; }

void Prime(int n) {
  if (n < 2) {
    cout << 0 << endl;
    return;
  }
  for (int i = 2; i < n; i++) {
    if (n % i == 0) {
      cout << 0 << endl;
      return;
    }
  }
  cout << 1 << endl;
  return;
}

// /Pass by value
void incr(int x) { x++; }

// pass by refrence
void incr1(int &x) { x++; }

// void swap(int &a, int &b) {
//   int temp = a;
//   a = b;
//   b = temp;
// }

// void swap(float &a, float &b) {
//   float temp = a;
//   a = b;
//   b = temp;
// }

int main() {
  // int a=10;
  // // incr(a);
  // incr1(a);
  // cout<<a;
  int a, b;
  cout << "Enter the value of a: ";
  cin >> a;
  cout << "Enter the value of b: ";
  cin >> b;
  float f1 = 1.2, f2 = 3.4;
  swap(a, b);
  swap(f1,f2);
  cout << " Value of a is " << a << endl;
  cout << " Value of b is " << b << endl;
  cout << " Value of f1 is " << f1 << endl;
  cout << " Value of f2 is " << f2 << endl;

  // fun1();
  // cout << endl;
  // Sum(10, 11);
  // cout << endl;
  // Prime(11);
  // cout<<"The sum of a and b is: "<<sum(a,b)<<endl;

  // cout<<"The mult of a and b is: "<<mult(a,b)<<endl;

  // cout << "The factorial of a is: " << fact(a) << endl;
  // cout << "The factorial of b is: " << fact(b) << endl;
  // cout << "The factorial of a+b is: " << fact(a + b) << endl;
  // cout << "The factorial of a-b is: " << fact(a - b) << endl;

  // cout << "The Prime of a is: " << isPrime(a) << endl;
  // cout << "The Prime of b is: " << isPrime(b) << endl;
  // cout << "The Prime of a+b is: " << isPrime(a + b) << endl;
  // cout << "The Prime of a-b is: " << isPrime(a - b) << endl;

  // cout << "The a is Even : " << isEven(a) << endl;
  // cout << "The b is Even : " << isEven(b) << endl;
  // cout << "The a+b is Even : " << isEven(a + b) << endl;
  // cout << "The a-b is Even : " << isEven(a - b) << endl;
}