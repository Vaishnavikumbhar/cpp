#include <iostream>
using namespace std;
//cout<<"THE MEMBER IN THE SINGLY LINKED LIST \n";
struct node{
    int data;
    struct node *next;
};
int i;
//cout<<"THE MEMBER IN THE SINGLY LINKED LIST \n";
void create(int num);
void display();

int main()
{
    int num;
  cout<<"THE MEMBER IN THE SINGLY LINKED LIST \n";
  cout<<"**********************************************\n";
  cout<<"enter the data for the linked list \n";
  cin>>num;
  //create(num);
  cout<<"display the data of the linked list \n";
  //display();
  return 0;
}
void create(int num)
{
    struct node*head;
    head=(struct node*)malloc(sizeof(struct node));
    head->data=NULL;
    head->next=NULL;
    struct node*newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=num;
    newnode->next=NULL;
    for(i=0;i<=num;i++)
    {
        newnode->data=num;
        newnode->next=NULL;
    }
}
