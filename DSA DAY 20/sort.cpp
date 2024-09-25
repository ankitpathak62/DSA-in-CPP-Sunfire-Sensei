#include <iostream>
using namespace std;

int main() {
  // int arr[6] = {125, 212, 3343, 422, 5, 1};
  int arr[100];
  int n;
  cout << "Enter the size of array: ";
  cin >> n;
  cout << "Enter the elements of array: ";
  for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }
  for (int i = 0; i < n-1; i++) {
    int index = i;
    for (int j = i + 1; j < n; j++) {
      if (arr[j] < arr[index]) {
        index = j;
      }
    }
    swap(arr[i], arr[index]);
  }

  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
}