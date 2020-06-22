#include <iostream>
#include <limits.h>
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


int checkbst(struct node* n,int min,int max)
{
    if(n==NULL)
    return 1;
    
    if(n->data<min || n->data>max)
    return 0;
    
    else
    return checkbst(n->left,min,n->data-1) && checkbst(n->right,n->data+1,max);
}
bool Isbst(struct node* n)
{
    return checkbst(n,INT_MIN,INT_MAX);
}

int main()
{
    struct node *root=newnode(5);
    
    root->left=newnode(3);
    root->right=newnode(6);
    root->left->left=newnode(2);
    root->left->right=newnode(4);
    
    if(Isbst(root))
    {
        cout<<"It is bst tree";
    }
    else
    cout<<"It is not bst tree";
    
}
