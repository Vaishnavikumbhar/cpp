#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    //default constructor
    //parameterized constructor
    node()
    {
        data=0;
        next=NULL;
    }
    node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};
//implement a linked list
class Linkedlist
{
    node *head;
public:
    Linkedlist()
    {
        head=NULL;
    }
    void insertnode(int);
    void printlist(int);
    void deletenode(int);
};
