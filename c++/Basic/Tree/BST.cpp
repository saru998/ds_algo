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

void Inordertav(struct node * p)
{
    if(p==NULL)
    return;
    Inordertav(p->left);
    
    cout<<p->data<<":";
    Inordertav(p->right);
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

struct node* search(struct node *n,int key)
{
    if(n==NULL || n->data==key)
    {
        return n;
    }
    
    if(key > n->data)
       return search(n->right,key);
    else if(key < n->data)
       return search(n->left,key);
}
struct node* minsuccessor(struct node* n)
{
    struct node *temp=n;
    while(temp->left!=NULL)
    temp=temp->left;

    return temp;
}
struct node *deletenode(struct node* n,int key)
{
    if(n==NULL) return n;
    
    if(n->data>key)
    n->left=deletenode(n->left,key);
    else if(n->data<key)
    n->right=deletenode(n->right,key);
    
    else
    {
      
        
        
        if(n->left==NULL)
        {
            struct node *temp=n->right;
            free(n);
            return temp;
        }
        else if(n->right==NULL)
        {
            struct node *temp=n->left;
            free(n);
            return temp;
        }
        
        struct node* temp=minsuccessor(n->right);
        n->data=temp->data;
        n->right=deletenode(n->right,temp->data);
    }
    return n;
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
    Inordertav(root);
    
    cout<<"\nSearching node 60 in binary search tree: ";
    if(search(root,60))
    cout<<"yes exist";
    else
    cout<<"Do not exist\n";
    
    cout<<"\nNow deleting node :";
    deletenode(root,10);cout<<endl;
    Inordertav(root);
    deletenode(root,70);cout<<endl;
    Inordertav(root);
    deletenode(root,60);cout<<endl;
    Inordertav(root);
    deletenode(root,30);cout<<endl;
    Inordertav(root);
    deletenode(root,50);cout<<endl;
    Inordertav(root);
    deletenode(root,40);cout<<endl;
    Inordertav(root);
    root=deletenode(root,80);cout<<endl;
    
    Inordertav(root);
    
}