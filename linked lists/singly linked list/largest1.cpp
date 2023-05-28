#include <iostream>
using namespace std;
struct node{
    int data;
    node *next;
};
node *head,*temp;
//head=temp;
int largestElement(node *head)
{
    int max=INT_MAX;
    while(head!=NULL)
    {
        if(max <head->data)
            max=head->data;
        head=head->next;
    }
    return max;
}
void push(node **head,int data)
{
 node *newNode =new node();
    newNode->data = data;
    newNode->next = (*head);
    (*head) = newNode;
}
void printList(node *head)
{
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    cout << "NULL" << endl;
}
int main()
{
    struct node* head = NULL;
    push(&head,15);
    push(&head,14);
    push(&head,13);
    push(&head,22);
    push(&head,17);
    cout << "Linked list is : " << endl;
    printList(head);
    cout << "Maximum element in linked list:";
    cout << largestElement(head) << endl;
}


