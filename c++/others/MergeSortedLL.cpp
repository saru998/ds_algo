//Merging two sorted link list
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
   ptr2=create_node(2);
   ptr3=create_node(3);
   
   ptr4=create_node(4);
   ptr5=create_node(5);
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
    struct node dummy; //dummy is not a pointer because its ref is to be saved in a pointer tail,as tail cant be double pointer.
    dummy.next=NULL;
    
    struct node *tail;
    tail=&dummy; //tail has a ref to dummy,tail->next=Null now.Dummy will be used to store head of list
    
    
    while(1)
    {
        if(a==NULL)
        {
            tail->next=b;   //if one of both list run outs
            break;
        }
        else if(b==NULL)
        {
            tail->next=a;    //if one of both list run outs
        }
        
        if(a->data<=b->data)
        {
            
            Move(&(tail->next),&a);
            
        }
        else
        {
            Move(&(tail->next),&b);
        }
        tail=tail->next;    //setting tail to last ele
        
        //displaylist(dummy.next); //uncomment this to see step by step progress
    }
    
    return dummy.next;
}
void Move(struct node** des,struct node** src)
{
    struct node* temp=*src;
    *src=temp->next;        //progressing list
    temp->next=*des;    //making temp last node tail->next=null
    *des=temp;      // making tail to point temp
    
}

/*
tail=&dummy
dummy.next=NULL;
so tail->next==dummy next==NULL

For a=1,2,3 b=4,5,6

1>
1->Null,    temp->next=*des;    tail=tail->next; tail is 1, dummy is 1


2>
1->Null,                                        tail is 1, dummy is 1
2->Null,    temp->next=*des;        
1->2->Null  *des=temp;  tail=tail->next;        tail is 2, dummy is 1

3>
2->Null,                                        tail is 2, dummy is 1
3->Null,    temp->next=*des;
1->2->3->Null   *des=temp;  tail=tail->next;    tail is 3, dummy is 1

*/