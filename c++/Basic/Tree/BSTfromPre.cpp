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
    struct node *p=new node;
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
struct node* construct(int Arr[],int *ptr,int key,int min,int max,int size)
{
    if(*ptr>=size)
    return NULL;
    
    struct node* root=NULL;
    
    if(key>min && key<max)
    {
        root=newnode(key);
        *ptr=*ptr+1;
        
        root->left=construct(Arr,ptr,Arr[*ptr],min,key,size);
        root->right=construct(Arr,ptr,Arr[*ptr],key,max,size);
        
        
    }
    return root;
}
struct node* ConstructTree(int Arr[],int size)
{
    int ptr=0;
    return construct(Arr,&ptr,Arr[ptr],INT_MIN,INT_MAX,size);
}


int main()
{
    int Arr[] = {10, 5, 1, 7, 40, 50};
    int size = sizeof( Arr) / sizeof( Arr[0] );
    
    struct node* root = ConstructTree(Arr,size);
    
    Inordertav(root);
    
    
    
}