#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
void create(int n);
void insert(int num);
void display();
int n,num;
int main()
{
  cout<<"the linked list work on the singly rule\n";
  cout<<"***************************************\n";
  cout<<"enter the number \n";
  cin>>n;
  create(n);
  cout<<"enter the value which you want to insert\n";
  cin>>num;
  insert(num);
  display();
  return 0;
}
void create(int n)
{
    node *head,*newnode,*temp;
    head=new node();
    cout<<"enter the number \n";
    cin>>num;
    head->data=num;
    head->next=NULL;
    temp=head;
    for(int i=0;i<=n;i++)
    {
        newnode=new node();
        cout<<"enter the number \n";
        cin>>num;
        newnode->data=num;
        newnode->next=NULL;
        temp->next=newnode;

    }
}
