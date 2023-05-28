#include <iostream>
using namespace std;
int queue[100],rear=-1,front=-1,n;
void insert()
{
    if(rear==n-1)
    {
        cout<<"the queue space is not here\n";
    }
    else
    {
        cout<<"enter the data of the queue node in the list \n";
        cin>>n;
        rear++;
        queue[rear]=n;

    }
}
void display()
{
    if(front==-1)
    {
        cout<<"queue is empty";
    }
    cout<<"elements from the queue\n";
    for(int i=front;i<=rear;i++)
        cout<<"queue[rear]"<<queue[rear] ;
}
int main()
{
    insert();
    display();
    return 0;
}
