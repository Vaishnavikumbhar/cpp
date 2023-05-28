#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
};
node *head=new node();
node *temp=new node();
int n,i,data,num,choice;
void create(int n);
void insert1(int data);
void print();
int main()
{
    cout<<"PRINT THE SINGLY LINKEDLIST\n";
    cout<<"enter the data of the node\n";
    cin>>n;
    create(n);
    cout<<"displaying the data of the linkedlist\n";
    print();
    cout<<"Enter the your choice\n";
    cin>>choice;
    if(choice==1)
    {
    cout<<"Enter the data which you want to add\n";
    cin>>data;
    insert1(data);
    }
    cout<<"Displaying the linked list\n";
    print();
    return 0;
}
void create(int n)
{
    cout<<"Enter the data\n";
    cin>>data;
    head->data=data;
    head->next=NULL;
    temp=head;
    for(i=0;i<n;i++)
    {
        node *newnode=new node();
        if(newnode==NULL)
        {
            cout<<"the linked list is not present in the linkedlist\n";
        }
        else
        {
            cout<<"enter the data \n";
            cin>>data;
            newnode->data=data;
            newnode->next=NULL;
            temp->next=newnode;
            temp=newnode;
        }
    }
}
void insert1(int data)
{
    node *newnode1;
        newnode1->data=data;
       // newnode1->next=NULL;
        newnode1->next=head;
        head=newnode1;
}
void print()
{
 node *ptr=new node();
  if(ptr==NULL)
  {
    cout<<"ptr is not null\n";

 }
 else
 {
      ptr=head;
      while(ptr!=NULL)
      {
          cout<<"\n"<<ptr->data;
          ptr=ptr->next;
      }
  }
}
