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
node *current,*previous,*nextnode=new node();
int n,i,data,choice;
void create(int n);
void print();
void reverse1();
void print1();
int main()
{
    cout<<"PRINT THE SINGLY LINKEDLIST\n";
    cout<<"enter the data of the node\n";
    cin>>n;
    create(n);
    cout<<"displaying the data of the linkedlist\n";
    print();
    cout<<"enter the value of the choice\n";
    cin>>choice;
    if(choice==1)
    {
        reverse1();
    }
    //reverse1();
    cout<<"displaying the reversed linked list\n";
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
void reverse1()
{
    previous=NULL;
    current=nextnode=head;
    while(nextnode!=NULL)
    {
    nextnode=nextnode->next;
    current->next=previous;
    previous=current;
    current=nextnode;
    }
    head=previous;


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
void print1()
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
