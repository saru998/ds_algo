#include <iostream>
using namespace std;

struct node
{
    int data;
    node *link;
}*start;

node *create_node(int value);
void displaylist();
void reverse()
{
        struct node *prev=NULL;
        struct node *curr=start;
        struct node *next;
        
        while(curr!=NULL)
        {
            next=curr->link;
            curr->link=prev;
            prev=curr;
            curr=next;
        }
        start=prev;
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

    reverse();
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
        cout<<endl;
    }
}


