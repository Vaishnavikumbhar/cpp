//insert the node using the local approach //
#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
}*head,*temp;
void create(int n);
void insert(int num);
void display();
int n,num,i,data;
int main()
{
    cout<<"enter the number\n";
    cin>>n;
    create(n);
    cout<<"insert the data at the node \n";
    cin>>data;
    insert(data);
    display();
    return 0;
}
    void create(int n)
    {
    node *newnode;
    head=new node();
    if(head==NULL)
    {
        cout<<"memory is not allocated\n";
    }
    else
    {
        cout<<"enter the data of the node \n";
        cin>>num;
        head->data=num;
        head->next=NULL;
        temp=head;

        for(i=2;i<=n;i++)
        {
            newnode=new node();
            if(newnode==NULL)
            {
                cout<<"memory is not allocated to node\n";
            }
            else
            {
                cout<<"enter the data of the node \n";
                cin>>num;
                newnode->data=num;
                newnode->next=NULL;
                temp->next=newnode;
                temp=temp->next;
                temp=newnode;
            }
        }
    }
}
void insert(int data)
{
  node *newnode;
  newnode=new node();
  newnode->data=data;
  newnode->next=head;
  //temp->next=newnode;
  head=newnode;

}
void display()
{
    node *ptr;
    ptr=head;
    while(ptr!=NULL)
    {
        cout<<"\n"<<ptr->data;
        ptr=ptr->next;
    }
}
