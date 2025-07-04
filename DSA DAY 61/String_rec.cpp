#include <iostream>
using namespace std;
bool checkPallindrome(string s, int start, int end)
{
    if (start >= end)
    {
        return true;
    }
    if (s[start] != s[end])
    {
        return false;
    }
    return checkPallindrome(s, start + 1, end - 1);
}
int main()
{
    string s = "nommon";

    cout << checkPallindrome(s, 0, 5) << endl; // Output: 0 (false)
}