#include <iostream>
using namespace std;
 
struct node
{
   int data;
   node *next;
}*head;

int main()
{
    struct node dummy;
    struct node *tail;
    tail=&dummy;
    
    dummy.data=6;
    cout<<tail->data;
    cout<<"hi";
    
    dummy.next=NULL;
    if(tail->next==NULL) cout<<"\ntail's next is null";
    
}