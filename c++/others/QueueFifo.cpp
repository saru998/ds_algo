#include <iostream>
using namespace std;

struct Qnode
{
    int data;
    Qnode *next;
};
struct Queque
{
    Qnode *rear,*front;
};
void enqueue(Queque *q,int n)
{
    struct Qnode *temp=new (struct Qnode);
    temp->data=n;
    temp->next=NULL;
    
    if(q->front==NULL)
    {
        q->front=q->rear=temp;
        return;
    }
    
    q->rear->next=temp;
    q->rear=temp;
}

struct Qnode *dequeue(Queque *q)
{
     if(q->front==NULL)
    {
        cout<<"Queue is empty\n";
        return NULL;
    }
    
    struct Qnode *temp=new (struct Qnode);
    temp=q->front;
    q->front=q->front->next;
    
    if(q->front==NULL)
    {
        q->rear=NULL;
    }
    return temp;
}
void traverse(Queque *q)
{
   struct Qnode *temp=new(struct Qnode);
   temp=q->front;
   
   while(temp!=NULL)
   {
       cout<<temp->data<<"->";
       temp=temp->next;
   }
   cout<<"NULL\n";
}
int main()
{
    Queque *q=new (struct Queque);
    q->rear=q->front=NULL;
    
    enqueue(q,1);
    enqueue(q,2);
    enqueue(q,3);
    
    traverse(q);
    
    struct Qnode *n;
    
    n=dequeue(q);
    if(n!=NULL) cout<<n->data<<" is removed\n";
    n=dequeue(q);
    if(n!=NULL) cout<<n->data<<" is removed\n";
    n=dequeue(q);
    if(n!=NULL) cout<<n->data<<" is removed\n";
    n=dequeue(q);
    if(n!=NULL) cout<<n->data<<" is removed\n";
    
    traverse(q);

}