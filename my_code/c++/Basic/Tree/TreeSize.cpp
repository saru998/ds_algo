#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *newnode(int n)
{
    struct node *p=new node;;
    p->data=n;
    p->left=NULL;
    p->right=NULL;
    
    
    return p;
}

int size(struct node *n);

int main()
{
    struct node *root=newnode(1);
    
    root->left=newnode(2);
    root->right=newnode(3);
    root->left->left=newnode(4);
    root->left->right=newnode(5);
    root->right->left=newnode(6);
    
   
   cout<<"size of tree is :"<<size(root);
}
int size(struct node *n)
{
    if(n==NULL)
    {
        return 0;
    }
    else
    {
        return size(n->left)+1+size(n->right);
    }
}