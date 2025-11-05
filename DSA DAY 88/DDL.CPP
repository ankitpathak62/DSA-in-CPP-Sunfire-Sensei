#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *prev;
    Node(int val)
    {
        data = val;
        prev = next = NULL;
    }
};
int main()
{
    Node *head = NULL;

    // add in start

    // list not present
    if (head == NULL)
    {
        head = new Node(5);
    }

    // list present
    else{
        Node * temp = new Node(10);
        temp->next = head;  
        head->prev = temp;
        head = temp;
    }
    // print
    Node *curr = head;
    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
}