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
   if(n==NULL) return;
   
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
       if(n->left==NULL && n->right==NULL)
       return;
       
       pre=n->left;
       succ=n->right;
       while(pre->right)
       {
           pre=pre->right;
       }
       while(succ->left)
       {
           succ=succ->left;
       }
       
   }
}

int main()
{
    struct node *root=NULL;
    
    root=insert(root,50);
    insert(root,30);
    insert(root,70);
    insert(root,40);
    insert(root,10);
    insert(root,60);
    insert(root,70);
    insert(root,80);
   
    
    node *succ,*pre;
    succ=pre=NULL;
    
    FindPreSucc(root,succ,pre,70);
    if(pre!=NULL)cout<<"Predessesor: "<<pre->data<<endl;
    else cout<<"No Predessesor"<<endl;
    if(succ!=NULL)cout<<"Successor: "<<succ->data<<endl;
    else cout<<"No Successor"<<endl;
    
}