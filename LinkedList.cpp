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
    }
};