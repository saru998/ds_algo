#include <iostream>
using namespace std;
 
struct node
{
   int data;
   node *next;
}*head;

int main()
{
    int a=5;
    int *ptr=&a;
    int **ptr2=&ptr;    //ptr2->ptr->a
    
    cout<<"1:"<<a<<endl;    // value of a
    cout<<"2:"<<&a<<endl;   //address of a
    
    cout<<"3:"<<ptr<<endl;  //simply printing value of pointer i.e address of a
    cout<<"4:"<<*ptr<<endl; //accessing value of address stored in ptr
    
    cout<<"5:"<<&ptr<<endl; //address of ptr pointer is diff from address of a
    cout<<"6:"<<ptr2<<endl; //value of ptr2 i.e address of ptr
    
    cout<<"7:"<<*ptr2<<endl; //value of (value ptr2 = add of ptr) i.e address of a
    cout<<"8:"<<**ptr2<<endl; //value of (address of a)
    
}