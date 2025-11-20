#include <iostream>
#include <stack>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class STACK2
{
    Node *top;
    int size; // actual size of stack
public:
    // constructor
    STACK2()
    {
        top = NULL;
        size = 0;
    }
    // push function
    void push(int x)
    {
        Node *temp = new Node(x);
        if (temp == NULL)
        {
            cout << "Stack Overflow" << endl;
            return;
        }
        else
        {
            temp->next = top;
            top = temp;
            size++;
            cout << x << " pushed into stack" << endl;
        }
    }
    // pop function
    void pop()
    {
        if (top == NULL)
        {
            cout << "Stack Underflow" << endl;
            return;
        }
        else
        {
            Node *temp = top;
            cout << top->data << " popped from stack" << endl;
            top = top->next;
            delete temp;
            size--;
        }
    }
    //  peek function
    int peek()
    {
        if (top == NULL)
        {
            cout << "Stack is empty" << endl;
            return -1;
        }
        else
        {
            return top->data;
        }
    }
    //  isEmpty function
    bool isEmpty()
    {
        return top == NULL;
    }
    //  getSize function
    int getSize()
    {
        return size;
    }
};

int main() {
    STACK2 stack;

    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.push(130);
    cout << stack.peek() << " is on the top of the stack" << endl; 
    stack.pop();
    stack.pop();
    stack.pop();
    stack.pop();
    cout << stack.peek() << " is on the top of the stack" << endl;
    cout << "Stack size is " << stack.getSize() << endl;
    // Check if stack is empty
    if (!stack.isEmpty()) {
        cout << "Stack is not empty" << endl;
    } else {
        cout << "Stack is empty" << endl;
    }

 
}