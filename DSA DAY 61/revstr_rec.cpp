#include<iostream>
using namespace std;

void revstr(string &s, int start, int end) {

    if (start >= end) {
        return;
    }
    char temp= s[start];
    s[start] = s[end];
    s[end] = temp;
    revstr(s, start + 1, end - 1);
}


int main(){
    string s = "Ankit";
    int n = s.length();
    revstr(s, 0, n - 1);
    cout << s << endl;
}