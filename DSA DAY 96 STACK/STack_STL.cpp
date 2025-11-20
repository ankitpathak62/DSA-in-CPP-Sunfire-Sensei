#include <iostream>
#include <stack>
using namespace std;


int main(){



    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    // cout << s.top() << " is on the top of the stack" << endl;
    s.pop();
    s.pop();
    s.pop();
    // cout << s.top() << " is on the top of the stack" << endl;
    // cout << "Stack size is: " << s.size() << endl;
    cout << (s.empty() ? "Stack is empty" : "Stack is not empty") << endl;
 
   
  
}