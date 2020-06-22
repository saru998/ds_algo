#include <iostream>
using namespace std;

struct node
{
   int data;
   node *next;
}*head;

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
void displaylist()
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

int main()
{
   struct node *ptr1;
   struct node *ptr2;
   struct node *ptr3;
   struct node *ptr4;
   struct node *ptr5;
   struct node *ptr6;
 
 
 
   ptr1=create_node(1);
   ptr2=create_node(2);
   ptr3=create_node(3);
   ptr4=create_node(4);
   ptr5=create_node(5);
   ptr6=create_node(6);
 
   ptr1->next=ptr2;
   ptr2->next=ptr3;
   ptr3->next=ptr4;
   ptr4->next=ptr5;
   ptr5->next=ptr6;
   ptr6->next=NULL;
 
   head=ptr1;
 
   displaylist();
   cout<<endl;
 
}