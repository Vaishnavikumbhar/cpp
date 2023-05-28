#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    //default constructor
    node()
    {
        data=0;
        next=NULL;
    }
    //parameterized constructor
    node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};
class Linkedlist
{
    node *head,*temp;
public:
    Linkedlist()
    {
        head=NULL;
    }
    void insert(int );
    //function to insert the data in the node
    void printlist();
    //function to print the node information
   // void delete1(int);
    //function to delete the information
};
void Linkedlist::insert(int data)
{
    node *newnode=new node(data);
    //to check the head whether the head is null or full
    if(head==NULL)
    {
        head=newnode;
        return;
    }
    newnode->data=data;
    newnode->next=head;
    head=newnode;
}
void Linkedlist::printlist()
{
    node *temp;
    head=temp;
    while(temp!=NULL)
    {
        cout<<"\n"<<temp->data;
    }
    temp=temp->next;
}
//main function of the node
int main()
{
    Linkedlist list;
    list.insert(34);
    list.insert(56);
    list.insert(45);
    list.printlist();
    return 0;
}
