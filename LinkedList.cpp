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
    void insertNodeEnd(int data)
    {
        Node *newNode = new Node();
        newNode->data = data;
        newNode->next = NULL;
        if (Head == NULL)
        {
            Head = newNode;
            Tail = newNode;
            return;
        }
        else
        {
            Tail->next = newNode;
            Tail = Tail->next;
        }
    }

    void insertNodePos(int pos, int data)
    {
        Node *current = new Node();
        Node *prev = new Node();
        current = Head;
        Node *newNode = new Node();
        newNode->data = data;
        newNode->next = NULL;
        if (pos < 1)
        {
            cout << "Invalid position" << endl;
        }
        else if (pos == 1)
        {
            newNode->next = Head;
            Head = newNode;
        }
        else
        {
            for (int i = 0; i < pos; ++i)
            {
                prev = current;
                current = current->next;
                if (current == NULL)
                {
                    cout << "Invalid Position" << endl;
                    return;
                }
            }
            prev->next = newNode;
            newNode->next = current;
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