#include <iostream>
#include <climits>
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
int min(int a,int b)
{
    return a<b?a:b;
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
int downleafdist(struct node* n)
{
    if(n==NULL)
    return INT_MAX;
    
    char c=n->data;
    
    if(n->left==NULL && n->right==NULL)
    return 0;

    
    return 1+min(downleafdist(n->left),downleafdist(n->right));
}


int closeleafutil(struct node* n,char c,struct node* anchester[],int index)
{
      
       if(n==NULL)
       return INT_MAX;
       
       char node=n->data;
       
       if(n->data==c)
       {
           int downCount=downleafdist(n);
           
           while(index)
           {
              
               int Acount=downleafdist(anchester[index-1]);
               if(Acount<downCount)
               return Acount+index;
               
               index--;
               
           }
           return downCount;
       }
       
       anchester[index]=n;
       return min(closeleafutil(n->left,c,anchester,index+1),closeleafutil(n->right,c,anchester,index+1));
       
       
}
void closeleaf(struct node* n,char c)
{

    struct node* anchester[100];
    cout<<closeleafutil(n,c,anchester,0);
    
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
    
    
    closeleaf(root,'A');cout<<endl;
    closeleaf(root,'B');cout<<endl;
    closeleaf(root,'C');cout<<endl;
    closeleaf(root,'E');cout<<endl;
    closeleaf(root,'I');cout<<endl;
    closeleaf(root,'K');cout<<endl;
    
    
    
    
    
    
}
