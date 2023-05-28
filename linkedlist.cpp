//write the c++ program to implement linked list(singly linked list)
#include <iostream>
using namespace std;
class linked_list
{
public:
    int data;
    linked_list *next;
};
int data,i,n;
linked_list *temp=new linked_list();
linked_list *head=new linked_list();
linked_list *newnode=new linked_list;
void create(int n);
void insert(int data);
void display();
int main()
{
    cout<<"PRINT THE SINGLY LINKED LIST"<<endl;
    cout<<"Enter the numbers"<<endl;
    cin>>n;
    create(n);
    cout<<"Display the linked list which you have created"<<endl;
    display();
    cout<<"Insert the data at first position"<<endl;
    cout<<"Enter the data"<<endl;
    cin>>data;
    insert(data);
    cout<<"Display the linked list which you have created"<<endl;
    display();
    return 0;
}
void create(int n)
{
    //linked_list *head=new linked_list;
    if(head==NULL)
    {
        cout<<"The linked list is not implement"<<endl;
    }
    else
    {
        cout<<"Enter the data of the node"<<endl;
        cin>>data;
        head->data=data;
        head->next=NULL;
        temp=head;
        for(i=0;i<=n;i++)
        {
            linked_list *newnode=new linked_list;
            if(newnode==NULL)
            {
                cout<<"Newnode is not implement"<<endl;
            }
            else
            {
                cout<<"Enter the data"<<endl;
                cin>>data;
                newnode->data=data;
                newnode->next=NULL;
                temp->next=newnode;
                temp=newnode;
            }
        }
    }
}
void insert(int data)
{
    linked_list *fnode=new linked_list();
    if(fnode==NULL)
    {
        cout<<"link is not work in the newnode"<<endl;
    }
    else
    {
        cout<<"Enter the data"<<endl;
        cin>>data;
        fnode->data=data;
        fnode->next=NULL;
        temp->next=fnode;
        fnode=newnode;
    }

}
void display()
{
    linked_list *ptr=new linked_list();
    ptr=head;
    while(head!=NULL)
    {
        cout<<ptr->data;
        ptr=ptr->next;
    }
}
