#include <iostream>
using namespace std;

class Node
{
public:
    int info;
    Node *next;
    Node()
    {
        next = 0;
    }
    Node(int el, Node *ptr = 0)
    {
        info = el;
        next = ptr;
    }
};

class LinkedList
{
public:
    Node *head, *tail;

public:
    LinkedList()
    {
        head = tail = 0;
    }
    void Addtohead(int);
    void Addtotail(int);
    int deletefromhead();
    int deletefromtail();
    void Deletenode(int);
    bool isinlist(int);
    void Display();
    void count();
    bool isempty();
};

void LinkedList ::Addtohead(int el)
{
    Node *temp;
    temp = new Node(el, head);
    head = temp;
    if (tail == 0) // empty list
        tail = head;
}

void LinkedList ::Addtotail(int el)
{

    if (tail != 0)
    {
        cout << endl;
        cout << "Element to be added is " << el;
        Node *temp = new Node(el);
        tail->next = temp; // *tail.next
        tail = tail->next;
    }
    else
        head = tail = new Node(el);
}

void LinkedList::Display()
{
    Node *temp;
    for (temp = head; temp != 0; temp = temp->next)
    {
        cout << temp->info << "-->";
    }
    cout << "Null" << endl;
}

void LinkedList::count()
{
    Node *temp;
    int count = 0;
    for (temp = head; temp != 0; temp = temp->next)
    {
        count += 1;
    }
    cout << "No. of nodes=" << count;
}

int LinkedList ::deletefromhead()
{
    int el = head->info;
    Node *temp = head;
    if (head == tail)
        head = tail = 0;
    else
        head = head->next;
    delete temp;
    return el;
}

int LinkedList ::deletefromtail()
{
    int el = tail->info;

    if (head == tail)
    {
        delete head;
        head = tail = 0;
    }
    else
    {
        Node *temp;

        for (temp = head; temp->next != tail; temp = temp->next)
            ;
        delete tail;
        tail = temp;
        tail->next = 0;
    }
    return el;
}

bool LinkedList ::isinlist(int el)
{
    Node *temp;
    for (temp = head; temp != 0 && !(temp->info == el); temp = temp->next)
        ;

    return temp != 0;
}

void LinkedList::Deletenode(int el)
{
    if (head != 0)
        if (head == tail && el == head->info)
        {
            delete head;
            head = tail = 0;
        }
        else if (el == head->info)
        {
            Node *temp = head;
            head = head->next;
            delete temp;
        }
        else
        {
            Node *pred, *temp;

            for (pred = head, temp = head->next;
                 temp != 0 && !(temp->info == el);
                 pred = pred->next, temp = temp->next)
                ;

            if (temp != 0)
            {
                pred->next = temp->next;
                if (temp == tail)
                    tail = pred;
                delete temp;
            }
        }
}

bool LinkedList::isempty()
{
    return (head == 0 && tail == 0);
}