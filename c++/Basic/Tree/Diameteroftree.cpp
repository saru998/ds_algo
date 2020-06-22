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

int Diameter(struct node *n);
int max(int a,int b);
int height(struct node *n);

int main()
{
    struct node *root=newnode(1);
    
    root->left=newnode(2);
    root->right=newnode(3);
    root->left->left=newnode(4);
    root->left->right=newnode(5);
    root->left->right->left=newnode(6);
    root->left->right->right=newnode(7);
    root->right->right=newnode(8);
    root->right->right->right=newnode(9);
    root->right->right->right->left=newnode(10);
    root->right->right->right->right=newnode(13);
    root->right->right->right->left->left=newnode(11);
    root->right->right->right->left->right=newnode(12);
    
   cout<<"Diameter of tree :"<<Diameter(root);
}
int Diameter(struct node *n)
{
    if(n==NULL)
    {
        return 0;
    }
    
    int hleft=height(n->left);
    int hright=height(n->right);
    
    int dleft=Diameter(n->left);
    int dright=Diameter(n->right);
    
    return max(1+hleft+hright,max(dleft,dright));
}
int height(struct node *n)
{
    if(n==NULL)
    {
        return 0;
    }
    return 1+ max(height(n->left),height(n->right));
}
int max(int a,int b)
{
    return (a>b)?a:b;
}