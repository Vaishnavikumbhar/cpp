#include <iostream>
using namespace std;
struct node
{
    int data;
    node*left;
    node*right;
};
node *newnode(int data)
{
    node *element = new node();
    element->data = data;
    element->left = NULL;
    element->right = NULL;

    return element;
}
void print(node *root,int level)
{
    if(root==NULL)

    return;
    if(level==1){
        cout<<root->data;
    }
    else if(level>1){
        print(root->left,level-1);
        print(root->right,level-1);
    }
        //root = root->right;

}
int main()
{
    node *root = newnode(1);
    root->left = newnode(4);
    root->right = newnode(8);
    root->left->left = newnode(5);
    root->right->right = newnode(12);
    print(root,3);
    return 0;
}
