#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    // Destructor to free the memory
    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            this->next = NULL;
            delete next;
        }
        cout << "Memory is free for the node " << value << endl;
    }
};

void InsertAtHead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void InsertAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void InsertAtMiddle(Node *&head, Node *&tail, int d, int position)
{
    // insert at starting
    if (position == 1)
    {
        InsertAtHead(head, d);
        return;
    }

    Node *temp = head;
    int count = 1;

    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }
    // insert at last
    if (temp->next = NULL)
    {
        InsertAtTail(tail, d);
        return;
    }
    Node *newNode = temp->next;
    Node *NodeToInsert = new Node(d);
    NodeToInsert->next = newNode;
    temp->next = NodeToInsert;
}

void DeleteNode(int position, Node *&head, Node *&tail)
{

    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        // memory free for the deletd node
        delete temp;
    }
    else
    {
        int count = 1;
        Node *curr = head;
        Node *prev = NULL;
        while (count < position)
        {
            prev = curr;
            curr = curr->next;
            count++;
        }
        if (curr->next == NULL)
        {
            tail = prev;
        }

        prev->next = curr->next;
        // curr->next = NULL;
        delete curr;
    }
}
void printList(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *N1 = new Node(10);
    // cout << N1->data << endl;
    // cout << N1->next << endl;
    Node *head = N1;
    Node *tail = N1;
    printList(head);
    InsertAtTail(tail, 20);
    printList(head);
    InsertAtTail(tail, 15);
    printList(head);
    InsertAtMiddle(head, tail, 17, 2);
    printList(head);
    DeleteNode(2, head, tail);
    printList(head);
    cout << "Tail " << tail->data << endl;
    cout << "Head " << head->data << endl;

    return 0;
}