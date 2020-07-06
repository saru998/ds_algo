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

int height(struct node *r);
void levelwiseprint(struct node *r,int level);

int main()
{
    struct node *root=newnode(1);
    
    root->left=newnode(2);
    root->right=newnode(3);
    root->left->left=newnode(4);
    root->left->right=newnode(5);
    
    int a;
   cout<<"Enter level which you want to print: ";
   cin>>a;
   
   cout<<"printing tree level wise : ";
   levelwiseprint(root,a);
}
int height(struct node *n)
{
    if(n==NULL)
    {
        return 0;
    }
    else
    {
        int l=height(n->left);
        int r=height(n->right);
        
        if(l>r)
        {
            return(l+1); 
        }
        else 
        return(r+1);
    }
}
void levelwiseprint(struct node *r,int level)
{
    if(r==NULL)
    {
        return;
    }
    else if(level==1)
    cout<<r->data<<"    ";
    
    else
    {
        levelwiseprint(r->left,level-1);
        levelwiseprint(r->right,level-1);
    }
}