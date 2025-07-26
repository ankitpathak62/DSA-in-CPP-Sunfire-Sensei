#include<iostream>
#include<vector>
using namespace std;
void print(int arr[], int index, int size, int sum, vector<int>&ans) {
if(index== size) {
    ans.push_back(sum);
    return;
}

// no
print(arr, index + 1, size, sum, ans); // Exclude current element
// Yes
print(arr, index + 1, size, sum + arr[index],ans); // Include current element

}
int main() {
    int arr[] = {3, 4, 5};
    vector<int>ans;
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;
    print(arr,0,size,sum,ans);
    cout << "All possible sums are: ";
    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << endl;
    }
}