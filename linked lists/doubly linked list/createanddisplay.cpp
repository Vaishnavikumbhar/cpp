#include <iostream>
using namespace std;
struct node
{
    int num;
    node *preptr;
    node *nextptr;
}*head,*temp;
void dllistcreate(int n);
//void insert(int data);
void display();
int n,num,i,data;
int main()
{
    cout<<"DOUBLY LINKED LIST WORKED IN A SUCH MANNER\n";
    cout<<"****************************************\n";
    cout<<"enter the numbers of node\n";
    cin>>n;
    dllistcreate(n);
    display();
    return 0;
}
void dllistcreate(int n)
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
int c,rev=0;
void display()
{
    int remainder;
  node *ptr;
  ptr=head;
  while(ptr!=NULL)
  {
      cout<<"\n"<<ptr->num;
      c=ptr->num;
      while(c!=0)
      {
          remainder=c%10;
          rev=rev*10+remainder;
          c/=10;
      }
      cout<<rev;
      ptr=ptr->nextptr;

  }
}
//cout<<"\n"<<ptr->num;
