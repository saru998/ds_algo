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


struct node* insert(struct node *n,int key)
{
    if(n==NULL)
    {
        return newnode(key);
    }
    
    if(key > n->data)
      n->right=insert(n->right,key);
    else if(key < n->data)
      n->left=insert(n->left,key);
    
    return n;
}


void FindPreSucc(struct node* n,struct node *& succ,node *& pre,int key)
{
   if(key<n->data)
   {
       FindPreSucc(n->left,succ,pre,key); 
   }
   else if(key>n->data)
   {
       FindPreSucc(n->right,succ,pre,key);
   }
   else
   {
       pre=n->left;
       succ=n->right;
       while(pre->right!=NULL)
       {
           pre=pre->right;
       }
       while(succ->left!=NULL)
       {
           succ=succ->left;
       }
       
   }
}

int main()
{
    int pre[] = {10, 5, 1, 7, 40, 50};
    //int size = sizeof( pre ) / sizeof( pre[0] );
     cout<<sizeof(pre[0]);
    
    
}