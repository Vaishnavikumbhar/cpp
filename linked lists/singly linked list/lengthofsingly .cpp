#include <iostream>
using namespace std;
#define max 9
int front=-1;
int rear=-1;
int n;
int queue_node[max];
void insert();
void delete1();
void display();
int main()
{
    cout<<"the code will be display\n";
    insert();
    delete1();
    display();
    return 0;
}
void insert()
{
  if(rear==max-1)
  {
      cout<<"the condition id underflow\n";

  }
  else
  {
      front=-1;
      front=0;
      cout<<"enter the numbers for printing\n";
      cin>>n;
      rear=rear+1;
      queue_node[rear]=n;
  }
}
void delete1()
{
    if(front==-1)
    {
        cout<<"memeory is underflow\n";
    }
    else
    {

    }

}
void display()
{

}
