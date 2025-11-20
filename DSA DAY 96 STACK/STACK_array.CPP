#include <iostream>
#include <stack>
using namespace std;

class STACK1
{
    int *arr;
    int top;
    int size;

public:
    // constructor
    STACK1(int s)
    {
        size = s;
        top = -1;
        arr = new int[s];
    }
    // push function
    void push(int x)
    {
        if (top == size - 1)
        {
            cout << "Stack Overflow" << endl;
            return;
        }
        else
        {
            top++;
            arr[top] = x;
            cout << x << " pushed into stack" << endl;
        }
    }
    // pop function
    void pop()
    {
        if (top == -1)
        {
            cout << "Stack Underflow" << endl;
            return;
        }
        else
        {
            cout << arr[top] << " popped from stack" << endl;
            top--;
        }
    }
    // peek function
    int peek()
    {
        if (top == -1)
        {
            cout << "Stack is empty" << endl;
            return -1;
        }
        else
        {
            return arr[top];
        }
    }
    // isEmpty function
    bool isEmpty()
    {
        return top == -1;
    }
    // isSize function
    int isSize()
    {
        return top + 1;
    }
};

int main()
{
    STACK1 s(5);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    cout << "Top element is: " << s.peek() << endl;
    s.pop();
    cout << "Top element is: " << s.peek() << endl;
    cout << "Stack size is: " << s.isSize() << endl;
    s.pop();
    s.pop();
    s.pop();
     
    cout << "Top element is: " << s.peek() << endl;
    cout << "Stack size is: " << s.isSize() << endl;
    s.isEmpty() ? cout << "Stack is empty" << endl : cout << "Stack is not empty" << endl;

}
