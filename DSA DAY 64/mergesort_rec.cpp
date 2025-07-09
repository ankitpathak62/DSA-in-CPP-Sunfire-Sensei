#include<iostream>
#include<vector>
using namespace std;

void merge(int arr[], int start, int mid, int end) {
    vector<int> temp(end - start + 1);
    int left = start;
    int right = mid + 1;
    int index = 0;

    // Merging the two subarrays
    while (left <= mid && right <= end) {
        if (arr[left] <= arr[right]) {
            temp[index++] = arr[left++];
        } else {
            temp[index++] = arr[right++];
        }
    }

    // Copy remaining elements from left subarray
    while (left <= mid) {
        temp[index++] = arr[left++];
    }

    // Copy remaining elements from right subarray
    while (right <= end) {
        temp[index++] = arr[right++];
    }

    // Copy temp array back to original array
    for (int i = 0; i < temp.size(); i++) {
        arr[start + i] = temp[i];
    }
}

void mergesort(int arr[], int start, int end) {
    if (start >= end) return; // base case

    int mid = (start + end) / 2;
    mergesort(arr, start, mid);        // Sort left half
    mergesort(arr, mid + 1, end);      // Sort right half
    merge(arr, start, mid, end);       // Merge sorted halves
}

int main() {
    int arr[] = {56, 5, 8, 98, 32, 12, 45, 67, 89, 23, 562, 12, 3, 26, 5, 9865, 4, 123};
    int size_of_array = sizeof(arr) / sizeof(arr[0]);

    mergesort(arr, 0, size_of_array - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < size_of_array; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
