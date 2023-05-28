#include <iostream>
using namespace std;
struct node{
    int data;
    node *next;
};
class LinkedList()
{
private:
    node *head;
public:
    LinkedList()
    {
        head=NULL;

    void create(int n);
   // void insert(int num);
    void display();
    }

};
int main()
{
    int n,num;
    cout<<"the linked list in the singly linked list\n";
    cout<<"***********************************************";
    cout<<"enter the number\n";
    cin>>n;
    create(n);
    cout<<"enter the number which you want to diasplay at the end of the list\n";
    cin>>num;
    insert(num);
    display();
    return 0;

}
