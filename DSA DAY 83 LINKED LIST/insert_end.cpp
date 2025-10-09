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

int main()
{
    Node *Head, *Tail;
    Head = NULL;
    Tail = NULL;
         

    int arr[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++)
    {
        // Insert the Node at end

        // List does not exist
        if (Head == NULL)
        {
            Head = new Node(arr[i]);
            Tail = Head;
        }
        else
        {
            Tail->next = new Node(arr[i]);
            Tail = Tail->next;
        }
    }
    //prit the linked list
    Node *temp = Head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}