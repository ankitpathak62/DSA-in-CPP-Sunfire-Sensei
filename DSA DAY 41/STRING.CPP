#include <iostream>
#include <string>
using namespace std;

int main()
{
    // char array[] = {'A', 'B', 'C', 'D', 'E', 'F'};
    // for (int i = 0; i < 6; i++)
    // {
    //     cout << array[i] << endl;
    // }

    // char array1[5] ;
    // cin >> array1;
    // array1[3] = '\0';
    // cout << array1 << endl;

    // string s = "Ankit Pathak";
    // cout << s << endl;

    // string s1 ;
    // cin >> s1 ;
    // cout << s1 << endl;

    // string s2 ;
    // getline(cin, s2);
    // cout << s2 << endl;
    // cout<< s2.size() << endl;

    // string s3 = "Ankit", s4 = " Pathak ";
    // string s5 = s3 + s4;
    // string s5 = s3.append(s4);
    // cout << s3 + s4 << endl;
    // cout << s5 << endl;

    // s5.push_back('Y');
    // cout << s5<< endl;
    // s5.push_back('T');
    // cout << s5 << endl;
    // s5.pop_back();
    // cout << s5 << endl;
    // s5 = s5 + "Youtube";
    // cout << s5 << endl;

    // string s6 = "Ankit Pathak is a \"Good\" man";
    // cout << s6 << endl;

    // string s7 ="\\0";
    // cout << s7 << endl;

    string s8 = "Ankit Pathak";

    // Reverse the string
    int start = 0;
    int end = s8.size() - 1;
    while (start < end)
    {
        swap(s8[start], s8[end]);
        start++;
        end--;
    }
    cout << s8 << endl;

    // Calculate the size of the string
    // cout << s8.size() << endl;

    int size = 0;
    for (int i = 0; s8[i] != '\0'; i++)
    {
        size++;
    }
    cout << size << endl;

    // Check if the string is pallindrome or not

    string s9 = "nitins";
    int start1 = 0;
    int end1 = s9.size() - 1;

    while (start1 < end1)
    {
        if (s9[start1] != s9[end1])
        {
            cout << "Not Pallindrome" << endl;
            break;
        }
        start1++;
        end1--;
    }
    if (start1 >= end1)
    {
        cout << "Pallindrome" << endl;
    }

}