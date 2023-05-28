#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
node *head;
int n;
void insert(int a)
{
    head=(struct node*)malloc(sizeof(struct node));
    if(head==NULL)
    {
        cout<<"link is not work further\n";
    }
    else
    {
        cout<<"enter the value \n";
        cin>>n;

    }
    node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        cout<<"the linked list is not work \n";

    }
    else
    {
        cout<<"enter the value \n";
        cin>>n;
        newnode->data=a;
        newnode->next=NULL;
        newnode=head;
    }
}
void display()
{
    struct node *ptr;
    ptr=head;
    while(ptr!=NULL)
    {
        cout<<"\n"<<ptr->data;
    }
    ptr=ptr->next;
}
int main()
{ int a;
    insert(a);
    display();
    return 0;
}
