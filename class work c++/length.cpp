#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node* next;
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
};
int getlength(Node* head)
{
    int len = 0;
    Node* temp = head;
    while(temp!=NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}
int main()
{
   Node* node1 = new Node(10);
   Node*head = node1;
   int length = getlength(head);
   if(length%2==0)
   {
       cout<<length/2;
   }
   else if(length%2!=0)
   {
       cout<<(length+1)/2;
   }
    return 0;
}
