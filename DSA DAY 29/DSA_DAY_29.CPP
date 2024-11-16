#include <iostream>
#include <vector>
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

    // size and capacity
    cout << "size of vec: " << vec.size() << endl;
    cout << "capacity of vec: " << vec.capacity() << endl;

    cout << "size of vec1: " << vec1.size() << endl;
    cout << "capacity of vec1: " << vec1.capacity() << endl;

    cout << "size of vec2: " << vec2.size() << endl;
    cout << "capacity of vec2: " << vec2.capacity() << endl;

    // update value
    vec[1] = 10;



    
}