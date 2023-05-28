#include <iostream>
using namespace std;
struct node{
    int data;
    struct node *next;
};
struct node*head=NULL;
void insert(int new_data)
{
    struct node*new_node;
    new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=new_data;
    new_node->next=head;
    head=new_node;

}
void reverse()
{
    node *current=head;
    node *prev=NULL,*next=NULL;
    while(current!=NULL){
    next=current->next;
    current->next=prev;
    prev=current;
    current=next;
    }
    head=prev;
}
void display()
{
    struct node *ptr;
    ptr=head;
    while(ptr!=NULL)
    {
        cout<<" \n"<<ptr->data;
        ptr=ptr->next;
    }
}
void display1()
{
    struct node *ptr;
    ptr=head;
    while(ptr!=NULL)
    {
        cout<<" the linked list\n"<<ptr->data;
        ptr=ptr->next;
    }
}
int main()
{
    int i,a[5],num;
    insert(2);
    insert(3);
    insert(4);
    insert(5);
    insert(6);
    display();
    //for(i=0;i<=5;i++)
    //{
      //  num=insert(a[i]);
    //}
    reverse();
    display1();
    return 0;
}
