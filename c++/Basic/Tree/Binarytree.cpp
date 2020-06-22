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

void Inordertav(struct node*);
void Preordertav(struct node * p);
void Postordertav(struct node * p);

int main()
{
    struct node *root=newnode(1);
    
    root->left=newnode(2);
    root->right=newnode(3);
    root->left->left=newnode(4);
    root->left->right=newnode(5);
    
   
    cout<<"\nTree in Inorder:";Inordertav(root);
    cout<<"\nTree in Preorder:";Preordertav(root);
    cout<<"\nTree in Postorder:";Postordertav(root);
}
void Inordertav(struct node * p)
{
    if(p==NULL)
    return;
    Inordertav(p->left);
    cout<<p->data<<":";
    Inordertav(p->right);
}
void Preordertav(struct node * p)
{
    if(p==NULL)
    return;
    cout<<p->data<<":";
    Preordertav(p->left);
    Preordertav(p->right);
}
void Postordertav(struct node * p)
{
    if(p==NULL)
    return;
    Postordertav(p->left);
    Postordertav(p->right);
    cout<<p->data<<":";
}