#include <iostream>
using namespace std;
class linked_list
{
    public:
 int data;
 linked_list *next;
};
void create_linkedlist(int num);
void insert_at_first(int data);
void insert_at_middle(int data);
void insert_at_end(int data);
void display_linkedlist();
int num,i,data,position;
linked_list *temp,*temp2=new linked_list();
linked_list *head=new linked_list();
int main()
{
    cout<<"enter the elements of the node which you want\n";
    cin>>num;
    create_linkedlist(num);
    cout<<"Displaying the data which you have entered\n";
    display_linkedlist();
    cout<<"Insert the data of the node in the first position\n";
    cin>>data;
    insert_at_first(data);
    cout<<"Diplaying the final list in the linkedlist format\n";
    display_linkedlist();
    cout<<"Enter the position of the elements where you have to insert\n";
    cin>>position;
    if(position<=1||position>=num)
    {
        cout<<"insertion is not possible in this case\n";
    }
    else(position>1||position<num);
    {
        cout<<"insertion is possible in this case\n";
    }
    cout<<"Insert the data in the middle position \n";
    cin>>data;
    insert_at_middle(data);
    cout<<"Displaying the information the node\n";
    display_linkedlist();
    cout<<"enter the data in end position\n";
    cin>>data;
    insert_at_end(data);
    cout<<"Displaying the information to node\n";
    display_linkedlist();
    return 0;
}
void create_linkedlist(int num)
{
   // linked_list *head=new linked_list();
    if(head==NULL)
    {
        cout<<"The linked list is not exist in the data\n";
    }
    else
    {
        cout<<"enter the data of the node\n";
        cin>>data;
        head->data=data;
        head->next=NULL;
        temp=head;
        for(i=0;i<num;i++)
        {
            linked_list *newnode=new linked_list();
            if(newnode==NULL)
            {
                cout<<"The linked list is not exist in the list\n";
            }
            else
            {
                cout<<"enter the data of the node which you would connect to head of the node\n";
                cin>>data;
                newnode->data=data;
                newnode->next=NULL;
                temp->next=newnode;
                temp=temp->next;
            }
        }
    }
}
void insert_at_first(int data)
{
    linked_list *newnode1= new linked_list();
    newnode1->data=data;
    newnode1->next=head;
    head=newnode1;
}
void insert_at_middle(int data)
{
    linked_list *newnode2=new linked_list();
    if(newnode2==NULL)
    {
        cout<<"the insertion is not possible\n";
    }
    else
    {
        newnode2->data=data;
        newnode2->next=NULL;
        temp2=head;
        for(i=0;i<=position-1;i++)
        {
        if(temp2==NULL)

            break;

        }
        if(temp2!=NULL)
        {
           newnode2->next=temp->next;
           temp->next=newnode2;
        }
        else
        {
            cout<<"insertion is not possible in another case\n";
        }

    }
}
void insert_at_end(int data)
{
    linked_list newnode3
}
void display_linkedlist()
{
    linked_list *temp1;
    if(head==NULL)
    {
        cout<<"list is empty\n";
    }
    else
    {
        temp1=head;
        while(temp1!=NULL)
        {
            cout<<"\n data"<<temp1->data;
            temp1=temp1->next;
        }
    }
}

