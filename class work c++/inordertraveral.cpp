#include <bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *left;
    node *right;
};
node *newnode(int data)
{
    node *temp = new node();
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}
void print_Inorder(node *root)
{
    if(root==NULL)
        return;
    print_Inorder(root->left);
    cout<<root->data;
    print_Inorder(root->right);
}
void print_preorder(node *root)
{
    if(root==NULL)
        return;
    cout<<root->data;
    print_preorder(root->left);
    print_preorder(root->right);
}
void print_postorder(node *root)
{
    if(root==NULL)
        return;
    print_postorder(root->left);
    print_postorder(root->right);
    cout<<root->data;
}
int main()
{
    node *root = newnode(1);
    root->left = newnode(2);
    root->right = newnode(3);
    root->left->left = newnode(4);
    root->left->right = newnode(5);
    cout<<"Inorder traveral of the tree:"<<endl;
    print_Inorder(root);
    cout<<endl;
    cout<<"preorder traveral of the tree:"<<endl;
    print_preorder(root);
    cout<<endl;
    cout<<"postorder traveral of the tree:"<<endl;
    print_postorder(root);
    return 0;
}
