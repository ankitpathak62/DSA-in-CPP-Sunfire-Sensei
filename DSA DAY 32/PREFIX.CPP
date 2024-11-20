#include <iostream>
#include <vector>
#include <limits> 
#include <algorithm>
using namespace std;

bool divide(vector<int> arr)
{
    int prefix = 0, totalsum = 0, n = arr.size();
    // Total Sum
    for (int i = 0; i < n; i++)
    {
        totalsum += arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        prefix = prefix + arr[i];

        if (totalsum == 2 * prefix)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int n;
    cout << "Enter the size of array ";
    cin >> n;
    vector<int> vec(n);
    cout << "Enter the elements of array ";
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
    cout << "Output is" <<divide(vec);
}