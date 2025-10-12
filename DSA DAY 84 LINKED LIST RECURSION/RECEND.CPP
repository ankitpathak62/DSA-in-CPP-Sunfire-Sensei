#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

Node *InsertAtTheEndLinkedList(int arr[], int index, int size)
{
    // base case
    if (index == size)
    {
        return NULL;
    }

    // recursive case
    Node *temp;
    temp = new Node(arr[index]);
    temp->next = InsertAtTheEndLinkedList(arr, index + 1, size);
    return temp;
};

int main()
{
    Node *Head;
    Head = NULL;
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    Head = InsertAtTheEndLinkedList(arr, 0, size);

    // print the linked list
    Node *temp = Head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    
}