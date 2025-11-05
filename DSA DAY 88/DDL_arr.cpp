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
    Node *tail = NULL;
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++)
    {
        if (head == NULL)
        {
            Node *newNode = new Node(arr[i]);
            head = tail = newNode;  // Fixed: assign newNode to both head and tail
        }
        else
        {
            Node *newNode = new Node(arr[i]);
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }
    
    // print
    Node *curr = head;
    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
    
    return 0;
}
