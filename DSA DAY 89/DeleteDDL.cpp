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
        next = NULL;
        prev = NULL;
    }
};
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; i++)
    {
        if (head == NULL)
        {
            Node *newNode = new Node(arr[i]);
            head = tail = newNode;
        }
        else
        {
            Node *newNode = new Node(arr[i]);
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }
    // // delete at start
    // if (head == NULL)
    // {
    //     cout << "List is empty, cannot delete." << endl;
    // }
    // else
    // {
    //     Node *deleteNode = head;
    //     head = head->next;
    //     delete deleteNode;

    //     if (head)
    //         head->prev = NULL;
    // }
    // // Delete at end
    // if (head != NULL)
    // {
    //     // If there's only one node
    //     if (head->next == NULL)
    //     {
    //         delete head;
    //         head = NULL;
    //     }
    //     // More Node Exist
    //     else
    //     {
    //         Node *curr = head;
    //         while (curr->next)
    //         {
    //             curr = curr->next;
    //         }
    //         curr->prev->next = NULL;
    //         delete curr;
    //     }
    // }
    /////////Delete at given position
    int position = 15;
    // Delete at start
    if (position == 1)
    {
        if (head == NULL)
        {
            cout << "List is empty, cannot delete." << endl;
        }
        else
        {
            Node *deleteNode = head;
            head = head->next;
            delete deleteNode;

            if (head)
                head->prev = NULL;
        }
    }
    else
    {
        Node *curr = head;
        while (--position)
        {
            curr = curr->next;
        }
        if (curr->next == NULL)
        {
            curr->prev->next = NULL;
            delete curr;
            // Delete at end
        }
        else
        {
            curr->prev->next = curr->next;
            curr->next->prev = curr->prev;
            delete curr;
            // Delete at middle
        }

    }

    Node *curr = head;
    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
}