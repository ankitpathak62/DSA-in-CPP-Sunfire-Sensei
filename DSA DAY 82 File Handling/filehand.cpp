// basic cpp program
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    vector<int> arr(5);
    cout << "Enter 5 numbers: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    // file ko open karenge
    ofstream fout;
    fout.open("vector.txt");
    fout << "Original Data: " << endl;
    // writing to file
    for (int i = 0; i < 5; i++)
    {
        fout << arr[i] << " ";
    };
    fout << endl
         << "Sorted Data: " << endl;

    sort(arr.begin(), arr.end());
    for (int i = 0; i < 5; i++)
    {
        fout << arr[i] << " ";
    };
}