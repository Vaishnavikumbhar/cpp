// combining the two linked list in the one form
#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
}*head,*temp;
void create(int n);
//void insert(int num);
void display();
int n,num,i,data,num1,arr[6];
int main()
{
    cout<<"enter the number\n";
    cin>>n;
    create(n);
    cout<<"insert the data at the node \n";
    cin>>data;
//    insert(data);
cout<<"enter the number";
cin>>num1;
for(i=0;i<=5;i++)
{
    cout<<"enter the numbers\n";
    cin>>arr[i];
}
for(i=0;i<=5;i++)
{
    cout<<"\n"<<arr[i];
}
    display();
    cout<<"which is the largest element in the list\n";
    if(arr[i]>arr[0])
        arr[0]=arr[i];
    cout<<"\n"<<arr[0];

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
//cout<<"r";


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
