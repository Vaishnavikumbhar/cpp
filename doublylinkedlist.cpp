//write the c++ program to implement the linked list(doubly linked list)
#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node *previous;
};
void create(int num);
void display();
int main()
{
    cout<<"PRINT THE DOUBLY LINKED LIST"<<endl;
    cout<<"*********************************"<<endl;
    cout<<"Enter the numbers of node"<<endl;
    cin>>num;
    create(num);
    cout<<"Display the list "<<endl;
    display();
    return 0;
}
void create(int num)
{

}
void display()
{

}
