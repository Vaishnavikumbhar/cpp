#include <iostream>
using namespace std;
struct node{
    int data;
    struct node *next;
};
class linked_list
{
private:
    node *head,*tail;
public:
    linked_list()
    {
        head=NULL;
        tail=NULL;
    }
    void add_node(int n)
    {
        node *newnode=new node;
        newnode->data=n;
        newnode->next=NULL;
        if(head==NULL)
        {
            head=newnode;
            tail=newnode;
        }
        else
        {
            tail->next=newnode;
            tail=tail->next;
        }
    }
};
int main()
{
    linked_list a;
    a.add_node(4);
    return 0;
}
