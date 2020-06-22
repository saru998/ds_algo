#include <iostream>
using namespace std;
 
struct node
{
   int data;
   node *link;
}*start;
 
node *create_node(int value);
void displaylist();
void swapnode(int x,int y)
{
 
       if (x == y) cout<<"Both number cant be same";
 
       struct node *p1,*p2,*c1,*c2,*save;
 
         p1 =p2= NULL;
 
       if(start==NULL)
       {
           cout<<"List is empty\n";
       }
       else
       {
           c1=start;
           c2=start;
 
 
           while(c1->data!=x)
           { 
               p1=c1;
               c1=c1->link;
           }
 
 
           while(c2->data!=y  )
           { 
               p2=c2;
               c2=c2->link;
           }
           //cout<<c2->data;
 
           if(p1!=NULL)
           p1->link=c2; //culprit line head is not getting modified//
           else{ 
             start=c2;
            // cout<<start->link->data;
 
           }
           if(p2!=NULL)
           p2->link=c1;
           else
           start=c1;
 
 
           save=c2->link;
           //cout<<c1->link->data;
           c2->link=c1->link;
           //cout<<c2->link->data;
           c1->link=save;
 
 
       }
       /* // for checking list link by link
       cout<<c2->data;
       cout<<c2->link->data;
       cout<<c2->link->link->data;
       cout<<c2->link->link->link->data;
       cout<<c2->link->link->link->link->data;
       cout<<c2->link->link->link->link->link->data;
       if(c2->link->link->link->link->link->link==NULL)
       cout<<"end";*/
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
 
   ptr1->link=ptr2;
   ptr2->link=ptr3;
   ptr3->link=ptr4;
   ptr4->link=ptr5;
   ptr5->link=ptr6;
   ptr6->link=NULL;
 
   start=ptr1;
 
   displaylist();
   cout<<endl;
 
   swapnode(1,6);
   displaylist();
 
 
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
       ptr->link=NULL;
   }
   return ptr;
}
void displaylist()
{
   struct node *ptr;
   if(start==NULL)
   {
       cout<<"List is empty\n";
   }
   else
   {
       ptr=start;
       cout<<"Linklist is: ";
       while(ptr!=NULL)
       {
           cout<<ptr->data<<"->";
           ptr=ptr->link;
       }
       if(ptr==NULL)cout<<"NULL";
       cout<<endl;
   }
}