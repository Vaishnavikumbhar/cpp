#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *head=NULL;
void create(int n)
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=n;
    newnode->next=head;
    head=newnode;
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
int main()
{
    int n;
    for(int i=0;i<=5;i++)
    {
    cout<<"enter the number\n";
    cin>>n;
create(n);
display();
    }
return 0;

}
