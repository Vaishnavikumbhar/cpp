#include <iostream>
using namespace std;
struct node{
    int data;
    node *preptr;
    node *nextptr;

}*head,*temp;
void create(int n);
void insert(int data);
void display();
int n,num,i;
int main()
{
    cout<<"****************************\n";
    cout<<"enter the numbers of the nodes\n";
    cin>>n;
    create(n);
    display();
    cout<<"enter the data of the node \n";
    cin>>num;
   insert(num);
    display();
    return 0;
}
void create(int n)
{
    node *newnode;
    head=new node();
    if(head==NULL)
    {
        cout<<"memory is not allocated \n";
    }
    else
    {
        cout<<"enter the data\n";
        cin>>num;
        head->data=num;
        head->preptr=NULL;
        head->nextptr=NULL;
        temp=head;
        for(i=0;i<=n;i++)
        {
            newnode=new node();
            if(newnode==NULL)
            {
                cout<<"memory is not allocated \n";

            }
            else
            {
                cout<<"enter the data\n";
                cin>>num;
                newnode->data=num;
                newnode->preptr=temp;
                newnode->nextptr=NULL;
                temp->nextptr=newnode;
                temp=newnode;
            }
        }
    }
}
void insert(int data)
{
    node *newnode;
    newnode=new node();
    newnode->data=num;
    newnode->preptr=temp->nextptr;
    temp->nextptr=newnode;
    temp=newnode;

}
void display()
{
    node *ptr;
    ptr=head;
    while(ptr!=NULL)
    {
        cout<<"-->\n"<<ptr->data;
        ptr=ptr->nextptr;
    }
}
