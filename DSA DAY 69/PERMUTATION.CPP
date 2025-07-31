#include <iostream>
#include <vector>
using namespace std;
void permutation(int arr[], int size, vector<int> &temp, vector<vector<int>> &ans, vector<bool> &visited)
{
    // base case
    if (temp.size() == size)
    {
        ans.push_back(temp);
        return;
    }

    for (int i = 0; i < size; i++)
    {
        if (visited[i] == 0)
        {
            visited[i] = 1;
            temp.push_back(arr[i]);
            permutation(arr, size, temp, ans, visited);
            visited[i] = 0;
            temp.pop_back();
        }
    }
}

int main()
{
    int arr[] = {1, 2, 3,4};
    vector<vector<int>> ans;
    int size = sizeof(arr) / sizeof(arr[0]);
    vector<int> temp;
    vector<bool> visited(size, 0);
    permutation(arr, size, temp, ans, visited);

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}