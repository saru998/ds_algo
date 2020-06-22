#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
}*head;

node *create_node(int value);
void displaylist();

void Sortnextlist()
{
    struct node* ptr1=head;
    struct node* ptr2;
    
    int temp;
    
    while(ptr1!=NULL)
    {
      
        ptr2=ptr1;
        while(ptr2!=NULL)
        {
            if(ptr1->data>ptr2->data)
            {
                temp=ptr1->data;
                ptr1->data=ptr2->data;
                ptr2->data=temp;
            }
        ptr2=ptr2->next;
        }
        
        ptr1=ptr1->next;
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



    ptr1=create_node(6);
    ptr2=create_node(3);
    ptr3=create_node(2);
    ptr4=create_node(1);
    ptr5=create_node(5);
    ptr6=create_node(4);

    ptr1->next=ptr2;
    ptr2->next=ptr3;
    ptr3->next=ptr4;
    ptr4->next=ptr5;
    ptr5->next=ptr6;
    ptr6->next=NULL;

    head=ptr1;

    displaylist();
    cout<<endl;
    Sortnextlist();
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
        cout<<"Linklist is: ";
        while(ptr!=NULL)
        {
            cout<<ptr->data<<"->";
            ptr=ptr->next;
        }
        cout<<"NULL";
        cout<<endl;
    }
}


