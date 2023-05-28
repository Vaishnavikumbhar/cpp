#include <iostream>
using namespace std;
#define MAX 10
int stack1[MAX];
int top=-1;
//int n;
void push();
void pop();
void display();
int n,choice;
int main()
{
    cout<<"THE PROGRAM IS ON THE BASIS OF THE STACK \n";
    cout<<"**********************************************\n";
    cout<<"enter the number of the elements in the stack \n";
    cin>>n;

    while(n!=0)
    {
        switch(n)
{
    cout<<"enter the your choice \n";
    cin>>choice;
case 1:
    {
        push();
        break;
    }
case 2:
    {
        display();
        break;
    }
case 3:
    {
        pop();
        break;
    }
case 4:
    {
        cout<<"invalid entry";
        break;
    }
}


    }

    return 0;
}
void push()
{
    if(top>=MAX-1)
    {
        cout<<"stack is overflow\n";
    }
    else
    {
        cout<<"enter the number for entering the stack\n";
        cin>>n;
       // stack1[top]=n;
        top++;
        stack1[top]=n;
        cout<<"\n"<<stack1[top];
    }
}
int i;
void display()
{
cout<<"the elements are displaying the stack \n";
for(i=top;i>=0;i--)
{
    cout<<"\n"<<stack1[i];
}

}
void pop()
{
  if(top==-1)
    cout<<"it is undeflow\n";
  cout<<"\n"<<stack1[top];
  top--;
}
