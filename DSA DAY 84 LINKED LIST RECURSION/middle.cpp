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

    // Insert at the middle of linked list
    int x = 3;      // position
    int value = 10; // value to be inserted
    Node *temp = Head;
    x--;
    while (x--)
    {
        temp = temp->next;
    }
    Node *temp1 = new Node(value);
    temp1->next = temp->next;
    temp->next = temp1;

    // print the linked list - CORRECTED
    temp = Head;  // Reset temp to Head before printing
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;  // Added for better output formatting
    
    return 0;
}
