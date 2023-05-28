//write the c++ program two print the doubly linked list
#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *previous;
    node *next;
};
node *head,*temp;
int n,data,i;
void create(int n);
void print();
int main()
{
    cout<<"PRINT THE DOUBLY LINKED LIST\n";
    cout<<"enter the number\n";
    cin>>n;
    create(n);
    cout<<"Displaying the doubly linked list\n";
    print();
    return 0;
}
void create(int n)
{
    cout<<"Enter the data\n";
    cin>>data;
    head->data=data;
    head->previous=NULL;
    head->next=NULL;
    temp=head;
    for(i=0;i<n;i++)
    {
        node *newnode;
        newnode->data=data;
        newnode->previous=head;
        newnode->next=NULL;
        temp->next=newnode;
        temp=newnode;
    }
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


