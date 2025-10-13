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

Node *EndAtTheLinkedList(int arr[], int index, int size, Node *Prev)
{
    // base case
    if (index == size)
    {
        return Prev;
    }
    Node *temp;
    temp = new Node(arr[index]);
    temp->next = Prev;
    return EndAtTheLinkedList(arr, index + 1, size, temp);
};

int main()
{
    Node *Head;
    Head = NULL;
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr) / sizeof(arr[0]);
    Head = EndAtTheLinkedList(arr, 0, size, NULL);

    // Delete last node
    if (Head != NULL)
    {
        // only one node is present
        if (Head->next == NULL)
        {
      Node *temp = Head;
            Head = NULL;
            delete temp;
        }
         

        // 2nd condition is for more than one node
        else{
            Node*temp=Head;
            Node *prev = NULL;
            while(temp->next!=NULL)
            {
                prev=temp;
                temp=temp->next;
            }
            prev->next=temp->next;
            delete temp;
        }
    }

    // print the linked list
    Node *temp = Head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}