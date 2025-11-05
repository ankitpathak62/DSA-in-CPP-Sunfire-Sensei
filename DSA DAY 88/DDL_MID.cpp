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
            head = tail = newNode; // Fixed: assign newNode to both head and tail
        }
        else
        {
            Node *newNode = new Node(arr[i]);
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    // Insert at any position (for example, at position 2)
    int position = 87;
    int value = 25;

    // Insert at start
    if (position == 0)
    {
        // Linkedlist does not exist
        if (head == NULL)
        {
            head = new Node(value);
        }
        // Linkedlist exists
        else
        {
            Node *temp = new Node(value);
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
    }
    // Insert at end
    // want to insert at position greater than size 
    else if (position >= size)
    {
        Node *temp = new Node(value);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
    else
    {
        Node *curr = head;
        while (--position)
        {
            curr = curr->next;
        }
        if (curr->next == NULL) // Insert at end
        {
            Node *temp = new Node(value);
            curr->next = temp;
            temp->prev = curr;
        }
        else
        { // Insert in between
            Node *temp = new Node(value);
            temp->next = curr->next;
            curr->next->prev = temp;
            curr->next = temp;
            temp->prev = curr;
        }
    }

    Node *curr = head;
    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
}