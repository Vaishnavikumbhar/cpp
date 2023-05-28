#include <iostream>
using namespace std;
#define SIZE 10
int stack[SIZE];
int a[100];
int top=-1;
void push(int);
void pop();
void display();
int main()
{
    int choice,value;
    while(1){
    cout<<"***************MENU***********************"<<endl;
    cout<<"1 push_operation\n.2 pop_operation\n.3 display_operation\n4.Exist"<<endl;
    cout<<"enter the choice of the operation"<<endl;
    cin>>choice;
    switch(choice)
    {
        case 1:
        cout<<"enter the value"<<endl;
        cin>>value;
        push(value);
        break;
        case 2:
        pop();
        break;
        case 3:
        display();
        break;
        case 5:
        cout<<"Default value will be printed"<<endl;
    }
    }
}
void push(int value)
{
    if(top==SIZE-1)
    {
        cout<<"there is the overflow condition is occur";
    }
    else
    {
        top++;
        stack[top]=value;
        cout<<"Insertion is possible successfully"<<endl;
    }
}
void pop()
{
    int item;
    if(top==-1)
    {
        cout<<"there is underflow condition is occur"<<endl;

    }
    //printing the number in reverse order
   int i=top;
    //while(i>=0){
   a[i]= stack[top];
    top--;
    i++;
    cout<<endl<<a[i]<<endl;
}

void display()
{
int i;
for(i=top;i>=0;i--)
{
    cout<<stack[i];
}
}


