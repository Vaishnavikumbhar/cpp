//write the c++ program on the circular linked list
#include <iostream>
using namespace std;
class circular_linked
{
public:
    int data;
    circular_linked *next;
};
void create(int num);
void display();
circular_linked *head,*temp=new circular_linked();
int num,data,i;
int main()
{
    cout<<"\n\t\t\t\t THE CIRCULAR LINKEDLIST\n";
    cout<<"Enter the how many nodes do you want\n";
    cin>>num;
    create(num);
    cout<<"Displaying the node which you have entered\n";
    display();
    return 0;
}
void create(int num)
{
    circular_linked *newnode=new circular_linked();
    if(head==NULL)
    {
        cout<<"the data of the node not in the list\n";
    }
    else
    {
        cout<<"enter the data\n";
        cin>>data;
        head->data=data;
        head->next=NULL;
        temp=head;
        for(i=0;i<=num;i++)
        {
            if(newnode==NULL)
            {
            cout<<"list is not display\n";
            }
            else
            {
            cout<<"enter the data of the node\n";
            cin>>data;
            newnode->data=data;
            newnode->next=temp;
            temp=temp->next;
            }

        }

    }
}

void display()
{
  circular_linked *temp1;
  temp1=head;
  if(head==NULL)
  {
      cout<<"the list is not exist\n";
  }
  else
  {
      while(head!=NULL)
      {
          cout<<"\n"<<temp1->data;
          temp1=temp1->next;
      }
  }
}
