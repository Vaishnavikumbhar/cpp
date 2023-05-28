#include <iostream>
using namespace std;
class node{
public:
    int info;
    node *next;
    void create(int);
    void insert(int );
    void display();
};
    void node::create(int p)
    {
        int n;
        node *head=NULL,*temp,*newnode;
        head=new node();
       // cout<<"enter the value \n";
       // cin>>n;
        head->info=p;
        head->next=NULL;
        temp=head;
        newnode=new node();
       // cout<<"enter the number \n";
        //cin>>n;
        newnode->info=p;
        newnode->next=NULL;
        temp=newnode;

    }
    void node::insert(int n)
    {
        node *head;
        node *ptr=new node();
        ptr->info=n;
        ptr->next=head;
        head=ptr;
    }
    void node::display()
    {
    node *temp;
    node *head;
    temp=head;
    while(temp!=NULL)
    {
        cout<<temp->info;
        cout<<"--->";
        temp=temp->next;
    }
    }

int main()
{
    node n1,n;
  // n1.create(5);
    //n1.display();
    n1.insert(3);
    n1.display();
    n1.create(5);
    n1.display();
    return 0;
}
