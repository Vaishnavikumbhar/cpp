#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
};
void create(int n);
void insert(int num);
void display();
int n,num,i;
int main()
{
    cout<<"the linked list worked on the in linked list\n";
    cout<<"******************************************\n";
    cout<<"enter the number \n";
    cin>>n;
    create(n);
    cout<<"enter the data you want to insert \n";
    cin>>num;
    insert(num);
    display();
    return 0;
}
void create(int n)
{
    node *head,*newnode,*temp;
    head=new node();
    if(head==NULL)
    {
        cout<<"the linked list not worked \n";

    }
    else
    {
        cout<<"enter the number for printing \n";
        cin>>num;
        head->data=num;
        head->next=NULL;
        head=temp;
        for(i=0;i<=n;i++)
        {
            newnode=new node();
            if(newnode==NULL)
            {
                cout<<"the linked list is not worked \n";

            }
            else
            {
                cout<<"enter the number \n";
                cin>>num;
                newnode->data=num;
                newnode->next=NULL;
                temp->next=newnode;
                temp=temp->next;
            }
        }
    }
}
void insert(int num)
{
    node *newnode,*temp;
    newnode=new node();
    newnode->data=num;
    newnode->next=NULL;
    //temp=head;
    for(i=2;i<=pos-1;i++)
    {
        temp=temp-next;
    }
    if(temp!=NULL)
    {
        newnode->next=temp->next;
        temp->next=newnode;
    }
}
