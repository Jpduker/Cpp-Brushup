#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

class LindedList
{
public:
    Node *Head, *Tail;
    LindedList()
    {
        Head = NULL;
        Tail = NULL;
    }

    void insertNodeFront(int data)
    {
        Node *newNode = new Node();
        newNode->data = data;
        newNode->next = NULL;
        if (Head == NULL)
        {
            Head = newNode;
            Tail = newNode;
        }
        else
        {
            newNode->next = Head;
            Head = newNode;
        }
    }
};

int main()
{
    LindedList lst;
    lst.insertNodeFront(20);
    lst.insertNodeFront(30);
    lst.insertNodeFront(40);
    lst.insertNodeFront(50);
}