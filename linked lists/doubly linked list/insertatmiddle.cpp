#include <iostream>
using namespace std;
struct node
{
    int num;
    node *preptr;
    node *nextptr;
}*head,*temp;
int n,num,i,pos;
void create(int n);
void insert(int num);
void display();
int main()
{
    cout<<"DOUBLY LINKED LIST WORKED IN A SUCH MANNER\n";
    cout<<"****************************************\n";
    cout<<"enter the numbers of node\n";
    cin>>n;
    create(n);
    display();
    cout<<"enter the data\n";
    cin>>num;
    insert(num);
    cout<<"enter the position node \n";
    cin>>pos;
    if(pos>1||pos<n)
        cout<<"Node is implemented successfully\n";
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
        cout<<"enter the data of the node\n";
        cin>>num;
        head->num=num;
        head->preptr=NULL;
        head->nextptr=NULL;
        temp=head;
        for(i=0;i<=n;i++)
        {
            newnode=new node();
            if(newnode==NULL)
            {
                cout<<"memeory is not allocated to node\n";
            }
            else
            {
                cout<<"\n";
                cin>>num;
                newnode->num=num;
                newnode->preptr=temp;
                newnode->nextptr=NULL;
            temp->nextptr=newnode;
                temp=newnode;
            }
        }
    }

}

void insert(int num)
{
    node *newnode,*current;
    newnode=new node();
    for(i=1;i<=pos-1;i++)
    {
    current=temp->nextptr;
    newnode->num=num;
    newnode->preptr=temp;
    newnode->nextptr=current;
    temp=temp->nextptr;
    temp=newnode;
}
}
void display()
{
    node *ptr;
    ptr=head;
    while(ptr!=NULL)
    {
        cout<<"-->\n"<<ptr->num;
        ptr=ptr->nextptr;
    }
}

