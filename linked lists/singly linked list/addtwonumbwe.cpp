//write the c++ program to add the two numbers from the linked list
#include <iostream>
using namespace std;
class node
{
    public:
    int data;
    node *next;
};
node *newnode(int data)
{
    node *newnode=new node();
    newnode->data=data;
    newnode->next=NULL;
    return newnode;
}
void push(node** head_ref,int newdata)
{
    node *newnode=newnode(newdata);
    newnode->next=*head_ref;
    *head_ref=newnode;
}
node *addtwolist(node *first,node*second)
{
    //res is the head node of the resultant node
    node *res=NULL;
    node *temp,*prev=NULL;
    int carry=0,sum;
    while(first!=NULL||second!=NULL)
    {
        sum=carry+(first?first->data:0)+(second?second->data:0)

    }
}

int main()
{
    return 0;
}
