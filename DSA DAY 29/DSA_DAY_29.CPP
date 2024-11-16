#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    // create vector,declear
    vector<int> vec;
    vector<int> vec1(6, 1);
    vector<int> vec2 = {2, 5, 6, 8, 9, 10, 45, 48, 89, 65, 123};

    // push_back
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec1.push_back(3);
    vec2.push_back(3);
    vec2.pop_back();
    // vec1.push_back(31);

    vec.clear();
    // size and capacity
    // cout << "size of vec: " << vec.size() << endl;
    // cout << "capacity of vec: " << vec.capacity() << endl;

    // cout << "size of vec1: " << vec1.size() << endl;
    // cout << "capacity of vec1: " << vec1.capacity() << endl;

    // cout << "size of vec2: " << vec2.size() << endl;
    // cout << "capacity of vec2: " << vec2.capacity() << endl;

    cout << endl;
    // update value
    vec[1] = 10;
    // print vector
    // for (int i = 0; i < vec.size(); i++)
    // {
    //     cout << vec[i] << " ";
    // }

    // delete
    vector<int> vec3;
    vec3.push_back(1);
    vec3.push_back(12);
    vec3.push_back(123);
    vec3.push_back(1234);
    vec3.push_back(12345);

    vec3.pop_back();
    // vec3.erase(vec3.begin());

    //   cout << "size of vec3: " << vec3.size() << endl;
    // cout << "capacity of vec3: " << vec3.capacity() << endl;

    // print vector

    // vec3.insert(vec3.begin()+2,5000);
    // for (int i = 0; i < vec.size(); i++){
    //     cout << vec3[i] << " ";
    // }

    vector<int> vec5 = {12, 5, 6, 8, 9, 10, 45, 48, 89, 65, 123};
    // cout<<vec5[0]<<endl;
    // cout<<vec5.front()<<endl;

    // cout<<vec5[vec5.size()-1]<<endl;
    // cout<<vec5.back()<<endl;

    vector<int> x;
    // copy vale of 1 vector to another
    x = vec5;

    // print vector x

    for (int i = 0; i < x.size(); i++)
    {
        cout << x[i] << " ";
    }
    cout << endl;
    // sort vector x
    sort(x.begin(), x.end());
    for (int i = 0; i < x.size(); i++)
    {
        cout << x[i] << " ";
    }
    cout << endl;
    sort(x.begin(), x.end(), greater<int>());
    for (int i = 0; i < x.size(); i++)
    {
        cout << x[i] << " ";
    }
}