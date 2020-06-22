#include <iostream>
using namespace std;
 
struct node
{
   int data;
   node *next;
}*start1,*start2;
node *create_node(int value);
void displaylist(struct node *head);
struct node* MergeSort(struct node *a,struct node *b);
void Move(struct node** des,struct node** src);

int main()
{
   struct node *ptr1;
   struct node *ptr2;
   struct node *ptr3;
   struct node *ptr4;
   struct node *ptr5;
   struct node *ptr6;
 
 
 
   ptr1=create_node(1);
   ptr2=create_node(5);
   ptr3=create_node(3);
   
   ptr4=create_node(4);
   ptr5=create_node(3);
   ptr6=create_node(6);
 
   ptr1->next=ptr2;
   ptr2->next=ptr3;
   ptr3->next=NULL;
   
   ptr4->next=ptr5;
   ptr5->next=ptr6;
   ptr6->next=NULL;
 
   start1=ptr1;
   start2=ptr4;
   
 
   displaylist(start1);
   displaylist(start2);
   cout<<endl;
   displaylist(MergeSort(start1,start2));
   
 
 
}
node *create_node(int value)
{
   struct node *ptr;
   ptr =  new(struct node);
 
   if(ptr==NULL)
   {
       cout<<"Memory not allocated";
       return 0;
   }
   else
   {
       ptr->data=value;
       ptr->next=NULL;
   }
   return ptr;
}
void displaylist(struct node *head)
{
   struct node *ptr;
   if(head==NULL)
   {
       cout<<"List is empty\n";
   }
   else
   {
       ptr=head;
       cout<<"nextlist is: ";
       while(ptr!=NULL)
       {
           cout<<ptr->data<<"->";
           ptr=ptr->next;
       }
       if(ptr==NULL)cout<<"NULL";
       cout<<endl;
   }
}
struct node* MergeSort(struct node *a,struct node *b)
{
    struct node dummy;
    dummy.next=NULL;
    
    struct node *tail;
    tail=&dummy; //tail will point to dummy
    
    cout<<&dummy<<cout<<endl;
    cout<<*tail<<cout<<endl;
    
    
    while(1)
    {
        if(a==NULL)
        {
            tail->next=b;
            break;
        }
        else if(b==NULL)
        {
            tail->next=a;
        }
        
        if(a->data<=b->data)
        {
            
            Move(&(tail->next),&a);
        }
        else
        {
            Move(&(tail->next),&b);
        }
        tail=tail->next;
    }
    return dummy.next;
}
void Move(struct node** des,struct node** src)
{
    struct node* temp=*src;
    *src=temp->next;
    temp->next=*des;
    *des=temp;
}