#include<iostream>
#include<vector>
using namespace std;

void subsequence(int arr[], int n, int index, vector<int>temp, vector<vector<int>> &ans) {
    //base case
    if (index == n) {
        ans.push_back(temp);
        return;
    }
    //Not taking the element
    subsequence(arr, n, index + 1, temp, ans);
    // Take the element
    temp.push_back(arr[index]);
    subsequence(arr, n, index + 1, temp, ans);
}
int main(){
    int arr[]={1, 2, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> temp;
    vector<vector<int>> ans;
    subsequence(arr, n, 0, temp, ans);
    cout << "All Subsequences are: " << endl;
    for (int i = 0; i < ans.size(); i++) {
        for (int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

}