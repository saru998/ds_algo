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
void printInorder(node* node)
{
    if (node == NULL)
       return;
    printInorder(node->left);
    cout << node->data << " ";
    printInorder(node->right);
}

int search(int arr[],int strt,int end,int key)
{
    
    for(int i=strt;i<=end;i++)
    {
       if(arr[i]==key) 
       return i; 
    }
    return -1;
}

int *split(int in[],int level[],int index,int size)
{
     int *temp=new int[index];
     int j=0;
     
        for(int i=0;i<size;i++)
        {
            if(search(in,0,index-1,level[i])!=-1)
            {temp[j]=level[i]; j++;}
        }
        return temp;
  
    return NULL;
}

struct node* construct(int in[],int level[],int strt,int end,int size)
{
  
    if(strt>end) return NULL;
    
    struct node* n=newnode(level[0]);
    
    if(strt==end) return n;
    
    int index=search(in,strt,end,n->data);
    
    
    int *Llevel=split(in,level,index,size);
    int *Rlevel=split(in+index+1,level,size-index-1,size);
    
      
    n->left=construct(in,Llevel,strt,index-1,size);
    n->right=construct(in,Rlevel,index+1,end,size);
    
    delete [] Llevel;
    delete [] Rlevel;
    
    return n;
}

int main()
{
  int in[]    = {4, 8, 10, 12, 14, 20, 22};
  int level[] = {20, 8, 22, 4, 12, 10, 14};
  
  int size=sizeof(in)/sizeof(in[0]);
  
  struct node* root=construct(in,level,0,size-1,size);
  
  printInorder(root);
    
}