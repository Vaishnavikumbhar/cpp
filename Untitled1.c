//write the cpp program to implement the linked list
#include <iostream>
using namespace std;
class linked_list
{
public:
    long long data;
    linked_list *next;
    linked_list()
    {
        this->next=NULL;
    }
    linked_list(long long data)
    {
        this->data=data;
        this->next=NULL;
    }
    add(ll data,linked_list *head)
    {
        if(head==NULL)
        {
            linked_list *temp=new linked_list(data);
            head=temp;
        }
        else
        {
            linked_list *temp=head;
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=new
        }
    }
};
int main()
{

}
