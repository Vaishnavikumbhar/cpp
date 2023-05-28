#include <iostream>
using namespace std;

struct node 
{
    int num;                
    node *nextptr;             
}*stnode; //node constructed

void createList(int n);                 
void insertatBegin(int num);	            
void display();                          
 
int main()
{
    int n,num;
		
    cout<<"Enter the number of nodes: ";
    cin>>n;
    createList(n);
    cout<<"\nLinked list data: \n";		
    display();
    cout<<"\nEnter data you want to insert at the beginning: ";
    cin>>num;
    insertatBegin(num);
    cout<<"\nLinked list after insertion: \n";		
    display();

    return 0;
}
void createList(int n) //function to create linked list.
{
    struct node *frntNode, *tmp;
    int num, i;
 
    stnode = (struct node *)malloc(sizeof(struct node));
    if(stnode == NULL)        
    {
        cout<<" Memory can not be allocated";
    }
    else
    {
                                  
        cout<<"Enter the data for node 1: ";
        cin>>num;
        stnode-> num = num;      
        stnode-> nextptr = NULL; //Links the address field to NULL
        tmp = stnode;
 
        for(i=2; i<=n; i++)
        {
            frntNode = (struct node *)malloc(sizeof(struct node)); 
 

            if(frntNode == NULL) //If frntnode is null no memory cannot be alloted
            {
                cout<<" Memory can not be allocated";
                break;
            }
            else
            {
                cout<<"Enter the data for node "<<i<<": "; // Entering data in nodes.
                cin>>num;
                frntNode->num = num;         
                frntNode->nextptr = NULL;    
                tmp->nextptr = frntNode;     
                tmp = tmp->nextptr;
            }
        }
    }
} 

void insertatBegin(int num) //function to insert element at beginning
{
    struct node *frntNode;
    frntNode = (struct node*)malloc(sizeof(struct node));
    if(frntNode == NULL)
    {
        cout<<" Memory can not be allocated";
    }
    else
    {
        frntNode->num = num;         //Linkinking data
        frntNode->nextptr = stnode; //Linking address
        stnode = frntNode; 
    }
}

void display() //function to print linked list
{
    struct node *tmp;
    if(stnode == NULL)
    {
        cout<<" No data found in the list";
    }
    else
    {
        tmp = stnode;
        cout<<"Linked List: ";
        while(tmp != NULL)
        {
            cout<<"\t"<<tmp->num;         
            tmp = tmp->nextptr;         
        }
    }
} 
Output:
Enter the number of nodes: 4
Enter the data for node 1: 11
Enter the data for node 2: 22
Enter the data for node 3: 33
Enter the data for node 4: 44

Linked list data: 
Linked List: 	11	22	33	44