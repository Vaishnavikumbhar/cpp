#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;

};
void create(int n);
void insert(int data);
void display();
int n,num,i;
int main()
{
  cout<<"****************************\n";
  cout<<"circular linked list worked in the manner\n";
  cout<<"enter the number \n";
  create(n);
  cout<<"enter the data of the node \n";
  cin>>data;
  insert(data);
  display();
  return 0;
}
void create(int n)
{

}
