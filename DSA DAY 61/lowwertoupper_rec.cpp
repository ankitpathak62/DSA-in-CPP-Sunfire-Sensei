#include <iostream>
using namespace std;

void lowertoupper(string &s, int i)
{
    if (i == -1)
    {
        return;
    }
    char ch = 'A' + s[i] - 'a';
    s[i] = ch;
    lowertoupper(s, i - 1);
}

int main()
{
    string s = "hello ankit, how are you?";
    int n = s.length();
    lowertoupper(s, n - 1);
    cout << s << endl;
}