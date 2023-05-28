
#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
class LinkedList {
  private:
    node* head;
  public:
    LinkedList(){
      head = NULL;
    }
void push(int new_data)
{
    node *newnode=new node();
    newnode->data=new_data;
    newnode->next=NULL;
    if(head==NULL)
    {
        head=newnode;
    }
    else{
            node *temp=new node();
    temp=head;
    while(temp->next!=NULL)

        temp=temp->next;
        temp->next=newnode;


    }
}
void printlist()
{
    node *temp=new node();
    temp=head;
    while(temp!=NULL)
    {
        cout<<"\n"<<temp->data;
        temp=temp->next;
    }
}

};
int main()
{
   LinkedList mylist;
   mylist.push(1);
   mylist.push(4);
   mylist.push(5);
   mylist.push(6);
   mylist.printlist();
}
