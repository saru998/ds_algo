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

void spiral(struct node *n);
void printtree(struct node *n,int level,bool flag);
int height(struct node *n);

int main()
{
    struct node *root=newnode(1);
    
    root->left=newnode(2);
    root->right=newnode(3);
    root->left->left=newnode(4);
    root->left->right=newnode(5);
    root->right->left=newnode(6);
    root->right->right=newnode(7);
    
    
   cout<<"Spiral form of tree:";
   spiral(root);
}
void spiral(struct node *n)
{
    if(n==NULL)
    {
        return;
    }
    int h=height(n);
    bool flag=false;
    
    for(int i=1;i<=h;i++)
    {
        printtree(n,i,flag);
        flag=!flag;
    }
  
}
void printtree(struct node *n,int level,bool flag)
{
    if(n==NULL)
    {
        return;
    }
    
    if(level==1)
    cout<<n->data;
    
    else if(level>1)
    {
        if(flag)
        {
            printtree(n->left,level-1,flag);
            printtree(n->right,level-1,flag);
        }
        else
        {
            printtree(n->right,level-1,flag);
            printtree(n->left,level-1,flag);
        }
    }
    
  
}
int height(struct node *n)
{
    if(n==NULL)
    {
        return 0;
    }
    int hl=height(n->left);
    int hr=height(n->right);
    
    if(hl>hr)
    return 1+hl;
    
    else
    return 1+hr;
}
