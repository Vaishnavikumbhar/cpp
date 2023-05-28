#include <iostream>
using namespace std;
struct node{
    int data;
    node *next;
};
node*even=NULL;
node*odd=NULL;
node*head=NULL;
void create(int data)
{
    node *newnode=new node();
    node*temp;
    newnode->data=data;
    newnode->next=NULL;
    if(head==NULL)
    {
        head=newnode;
        return ;
    }
    temp=head;
    while(temp->next!=NULL)
    temp=temp->next;

}
void display(node*head)
{
    node*ptr=head;
    while(ptr!=NULL)
    {
        cout<<"\n"<<ptr->data;
        ptr=ptr->next;
    }
}
void split()
{
    node*newnode;
    node*current;
    while(head!=NULL)
    {
        newnode=new node();
        newnode->data=head->data;
        newnode->next=NULL;
        if(head->data%2==0)
        {
            if(even==NULL)
            {
                even=newnode;
                newnode=newnode->next;
                continue;

            }
            else
            {
                current=even;
            }
        }
    }
}
