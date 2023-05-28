#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
}*head,*temp;
void create(int );
void insert(int );
void display();
int n,num,i;
int main()
{
    cout<<"the singly linked list for printing \n";
    cout<<"******************************************\n";
    cout<<"enter the number printing the number\n";
    cin>>n;
    create(n);
    cout<<"display the information\n";
    display();
    cout<<"enter the value which you want to insert \n";
    cin>>num;
    insert(num);
    display();
    return 0;
}
void create(int n)
{
    struct node *newnode,*temp;
    head=(struct node*)malloc(sizeof(struct node));
    if(head==NULL)
    {
        cout<<"the linked is not completed \n";

    }
    else{
            cout<<"enter the value\n";
            cin>>num;
            head->data=num;
            head->next=NULL;
            temp=head;
            for(i=0;i<=n;i++)
            {
                newnode=(struct node*)malloc(sizeof(struct node));

                    if(newnode==NULL)
                    {
                        cout<<"linked list is not worked \n";
                        break;
                    }
                    else
                    {
                        cout<<"enter the value for printing\n";
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
   struct node *newnode;
   newnode=(struct node*)malloc(sizeof(struct node));
   while(temp->next!=NULL)
   {
   newnode->data=num;
   newnode->next=NULL;
   temp->next=newnode;
   temp=temp->next;
}
}
void display()
{
    struct node *ptr;
    ptr=head;
    while(ptr!=NULL)
    {
        cout<<"\n"<<ptr->data;

    ptr=ptr->next;
}
}
