#include <iostream>
using namespace std;
void display(int *a);
void Merge(int *a,int low,int high,int mid);
void Mergesort(int *a,int low,int high);
int main()
{
   int a1[20]={1,6,3,9,2,4,7,5,0,8};
   display(a1);
   Mergesort(a1,0,9);
   cout<<endl;
   display(a1);





}
void Mergesort(int *a,int low,int high)
{
   int mid;
   if(low<high)
   {
      mid=(low+high)/2;
      Mergesort(a,low,mid);
      Mergesort(a,mid+1,high);
      Merge(a,low,high,mid);
   }
   return;
}
void Merge(int *a,int low,int high,int mid)
{
   int i,j,k,c[20];
   i=low;
   j=mid+1;
   k=low;

   while(i<=mid && j<=high)
   {
      if(a[i]<a[j])
      {
         c[k]=a[i];
         i++;
         k++;
         //cout<<"W1:"<<c[k]<<endl;
      }
      else
      {
         c[k]=a[j];
         j++;
         k++;
         //cout<<"W2:"<<c[k]<<endl;
      }
   }

   while(i<=mid)
   {
     c[k]=a[i];     //for single elements
     i++;
     k++;
     //cout<<"W3:"<<c[k]<<endl;
   }

   while(j<=high)
   {
     c[k]=a[j];
     j++;
     k++;
     //cout<<"W4:"<<c[k]<<endl;
   }

   for(int i=low;i<k;i++)
   {
      a[i]=c[i];//cout<<a[i]<<" at :"<<i<<endl;
      //display(a);
   }

}
void display(int *a)
{
   for(int i=0;i<10;i++)
   {
      cout<<a[i];
   }
   cout<<endl;
}
