#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
}*head;

node *create_node(int value);
void CreateList();
void insert_at_beg();
void insert_at_last();
void insert_at_pos();
void displaylist();
void deleteatbeg();
void deleteatend();
void deleteatloc();
void lenght();
void search();
void findatpos();

int main()
{
    int choice;
    head=NULL;
    while(1)
    {
        cout<<"Press 1 for creating a prebuild list\n";
        cout<<"Press 2 for adding new node at begining\n";
        cout<<"Press 3 for adding new node at end\n";
        cout<<"Press 4 for adding new node at some position\n";
        cout<<"Press 5 for deleting node from begining\n";
        cout<<"Press 6 for deleting node from end\n";
        cout<<"Press 7 for deleting a node at some position\n";
        cout<<"Press 8 for learning lenght of linked list\n";
        cout<<"Press 9 for searching element and its position in linked list\n";
        cout<<"Press 10 for finding element at any given position at linked list\n";
        
        cin>>choice;
        switch(choice)
        {

            case 1:CreateList();break;
            case 2:insert_at_beg();break;
            case 3:insert_at_last();break;
            case 4:insert_at_pos();break;
            case 5:deleteatbeg();break;
            case 6:deleteatend();break;
            case 7:deleteatloc();break;
            case 8:lenght();break;
            case 9:search();break;
            case 10:findatpos();break;
            
            default:cout<<"Wrong choice";
        }


        displaylist();
        cout<<endl;


    }

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
void insert_at_beg()
{
    int value;
    cout<<"Enter value to be inserted at begining\n";
    cin>>value;


    struct node *ptr,*save;
    ptr=create_node(value);
	
    if(head==NULL)
    {
        head=ptr;
        head->next=NULL;
    }
    else
    {
        save=head;
        head=ptr;
        head->next=save;
    }
    cout<<"node inserted successfuly\n";
}
void insert_at_last()
{
    int value;
    cout<<"Enter value to be inserted at last\n";
    cin>>value;


    struct node *ptr,*temp;
    ptr=create_node(value);
    temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    ptr->next=NULL;
    temp->next=ptr;
    cout<<"element inserted at end successfuly\n";
}
void insert_at_pos()
{
    int pos,value,counter;


    cout<<"Enter position where node to be inserted\n";
    cin>>pos;

    cout<<"Enter value to be inserted\n";
    cin>>value;

    struct node *ptr,*temp,*save;
    ptr=create_node(value);
    temp=head;

    counter=0;
    while(temp!=NULL)
    {
        counter++;
        temp=temp->next;
    }

    temp=head;
    if(pos==1)
    {
        if(head==NULL)
        {
            head=ptr;
            head->next=NULL;
        }
        else
        {
            save=head;
            head=ptr;
            head->next=save;
        }

    }
    else if(pos>1 && pos<=counter)
    {
        for(int i=0;i<pos-2;i++)
        {
            temp=temp->next;
        }
        //cout<<temp->data;
        save=temp->next;
        //cout<<save->data;
        temp->next=ptr;
        //cout<<temp->data;
        ptr->next=save;
    }
    else
        cout<<"wrong position\n";
}
void CreateList()
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

}
void deleteatbeg()
{
    if(head==NULL)
    return;
    
    head=head->next;
}
void deleteatend()
{
    if(head==NULL)
    return;
    
    struct node *ptr;
    ptr=head;
    while(ptr->next->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=NULL;
}
void deleteatloc()
{
    if(head==NULL)
    return;
    
    int pos,count=1;
    cout<<"Enter position where you want to delete node\n";
    cin>>pos;
      
    struct node *ptr;
    ptr=head;
 
    if(pos==1)
    {
        head=head->next;
        return;
    }
    while(count<pos-1)
    {
        ptr=ptr->next;
        count++;
    }
    ptr->next=ptr->next->next;
}
void lenght()
{
    if(head==NULL)
    return;
    
    int count=0;
      
    struct node *ptr;
    ptr=head;
 
   while(ptr!=NULL)
    {
        ptr=ptr->next;
        count++;
    }
    cout<<"Lenght of Linklist is :"<<count<<endl;
}
void search()
{
    if(head==NULL)
    return;
    
    int ele,count=0,flag=0;
    cout<<"Enter element you want to find and its position\n";
    cin>>ele;
      
    struct node *ptr;
    ptr=head;
 
   while(ptr!=NULL)
    {
        count++;
        
        if(ptr->data==ele)
        {
            cout<<"\nElement exist at position :"<<count<<endl;
            flag=1;
            break;
        }
        
        ptr=ptr->next;
        
    }
    
    if(flag==0) cout<<"Element does not exist\n";
}
void findatpos()
{
    if(head==NULL)
    return;
    
    int pos,count=0,flag=0;
    cout<<"Enter position at you want to find element \n";
    cin>>pos;
      
    struct node *ptr;
    ptr=head;
 
   while(count<pos-1)
    {
        count++;
        
        ptr=ptr->next;
        
    }
    
    if(ptr->next==NULL) cout<<"\nElement does not exist\n";
    else cout<<"\nElement exist at position "<<pos<<" is :"<<ptr->data<<endl;
}