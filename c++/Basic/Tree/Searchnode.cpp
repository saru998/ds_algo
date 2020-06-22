#include <iostream>
using namespace std;

struct node
{
    char data;
    struct node *left;
    struct node *right;
};

struct node *newnode(char n)
{
    struct node *p=new node;;
    p->data=n;
    p->left=NULL;
    p->right=NULL;
    
    
    return p;
}

struct node* searchnode(struct node* n,char c)
{
    if(n==NULL)
    return NULL;
    
    
    if(n->data==c)
    return n;
    
    if(searchnode(n->left,c)!=NULL)
    return searchnode(n->left,c);
    
     if(searchnode(n->right,c)!=NULL)
    return searchnode(n->right,c);
    
}

int main()
{
    struct node* root=newnode('A');
    root->left=newnode('B');
    root->right=newnode('C');
    root->right->left=newnode('E');
    root->right->right=newnode('F');
    root->right->left->left=newnode('G');
    root->right->right->right=newnode('H');
    root->right->left->left->left=newnode('I');
    root->right->left->left->right=newnode('J');
    root->right->right->right->left=newnode('K');
    
    
    struct node* temp=searchnode(root,'K');
    cout<<temp->data;
    
}
