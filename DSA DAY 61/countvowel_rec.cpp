#include <iostream>
using namespace std;

int countVowels(string s, int i)
{
    if (i == -1)
    {
        return 0;
    }

    if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||
        s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
    {
        return 1 + countVowels(s, i - 1);
    }
    else{
        return countVowels(s, i - 1);
    }
}
int main()
{
    string s = "Hello Ankit, how are you?";
    cout << countVowels(s, 48) << endl;
}