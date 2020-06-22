#include <iostream>
#include <queue>
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

void PrintTreeByQueue(struct node *n);

int main()
{
    struct node *root=newnode(1);
    root->left=newnode(2);
    root->right=newnode(3);
    root->right->left=newnode(6);
    root->right->right=newnode(7);
    root->left->left=newnode(4);
    root->left->right=newnode(5);
    cout<<"Printing tree level wise : ";
    PrintTreeByQueue(root);
}

void PrintTreeByQueue(struct node *n)
{
    if(n==NULL)
    return;
    
    queue<node *> q;
    
    
    
    q.push(n);
    
    cout<<endl;
    while(1)
    {
        
        if(q.size()==0)break;
        
        int count=q.size();
        while(count>0)
        {
            node *t=q.front();
            q.pop();
            
            cout<<t->data;
            
            if(t->left!=NULL)
                q.push(t->left);
                
            if(t->right!=NULL)
                q.push(t->right);
            
            count--;
        }
        cout<<endl;
        
    }
}
