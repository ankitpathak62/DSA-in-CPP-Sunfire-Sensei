#include<iostream>
#include<vector>
using namespace std;

void subsequence(const string &s, int n, int index, string temp, vector<string> &ans) {
    // Base case: if we have considered all characters
    if (index == n) {
        ans.push_back(temp);
        return;
    }
    // Not taking the current character
    subsequence(s, n, index + 1, temp, ans);

    // Take the current character
    temp.push_back(s[index]);
    subsequence(s, n, index + 1, temp, ans);
}

int main(){
    string s = "abc";
    vector<string> ans;

    subsequence(s, s.size(), 0, "", ans);

    cout << "All Subsequences are: " << endl;
    for (const auto &seq : ans) {
        cout << (seq.empty() ? "\"\"" : seq) << endl;
    }
}
