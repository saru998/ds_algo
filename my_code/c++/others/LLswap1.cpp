#include <iostream>
using namespace std;

struct node
{
    int data;
    node *link;
}*start;

node *create_node(int value);
void displaylist();
void swapnode(int x,int y);

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

    swapnode(5,6);



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
        cout<<endl;
    }
}

void swapnode(int x,int y)
{

        if (x == y) cout<<"Both number cant be same";
        
        struct node *ptr1,*ptr2,*save1,*save2;
       
        if(start==NULL)
        {
            cout<<"List is empty\n";
        }
        else
        {
            ptr1=NULL;
            ptr2=NULL;
            
            ptr1=start;
            ptr2=start;
            
            while(ptr1->link->data!=x)
            {ptr1=ptr1->link;}
            
            while(ptr2->link->data!=y)
            {if(ptr2->link->link!=NULL) ptr2=ptr2->link;}
            
            
            save1=ptr1->link;
            save2=ptr2->link;
            
            ptr2->link=ptr1->link;
            
            ptr1->link=save2;
            
            ptr1->link->link=save1->link;
            
            ptr2->link=save1;
            
            save1->link=save2;
          

        }
}
