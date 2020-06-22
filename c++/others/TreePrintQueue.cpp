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
int height(struct node *n);

int main()
{
    struct node *root=newnode(1);
    root->left=newnode(2);
    root->right=newnode(3);
    root->right->left=newnode(6);
    root->right->right=newnode(7);
    root->left->left=newnode(4);
    root->left->right=newnode(5);
    cout<<"Printing tree: \n";
    PrintTreeByQueue(root);
}
int height(struct node *n)
{
    //
    if(n==NULL)
    {
        return 0;
    }
    else
    {
        //cout<<n->data<<endl;
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

void PrintTreeByQueue(struct node *n)
{
    if(n==NULL)
    return;
    
    queue<node *> q;
    int h =height(n)+1;
    
    
    q.push(n);
    
    while(1)
    {
        
        if(q.size()==0)break;
        
        int count=q.size();
        //int temp=h-count;
        
        //cout<<endl;
        //cout<<"temp"<<temp<<endl;
        
        while(count>0)
        {
            node *t=q.front();
            q.pop();
            
            int temp2=h;
            while(temp2){cout<<"  ";temp2--;}
            
            cout<<t->data;
            
            
            int temp=count;
            while(temp)
            {
                cout<<" ";temp--;
            }
            
            if(t->left!=NULL)
                q.push(t->left);
                
            if(t->right!=NULL)
                q.push(t->right);
            
            count--;
        }
        h--;
        cout<<endl;
        
    }
}
