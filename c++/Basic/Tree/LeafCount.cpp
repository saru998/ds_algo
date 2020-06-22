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

int leafCount(struct node *n);

int main()
{
    struct node *root=newnode(1);
    
    root->left=newnode(2);
    root->right=newnode(3);
    root->left->left=newnode(4);
    root->left->right=newnode(5);
    root->right->left=newnode(6);
    root->right->right=newnode(7);
   
   cout<<"leafs in tree :"<<leafCount(root);
}
int leafCount(struct node *n)
{
    if(n==NULL)
    {
        return 0;
    }
    if(n->left==NULL&&n->right==NULL)
    return 1;
    else
    {
        return leafCount(n->left)+leafCount(n->right);
    }
}