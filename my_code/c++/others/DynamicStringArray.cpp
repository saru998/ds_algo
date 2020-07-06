#include <iostream>
#include <cmath>
using namespace std;

int main()
{
   int a;
   cin>>a;
   
   string *b;
   b=new string[a];
   
   for(int i=0;i<a;i++)
   {
       cin>>b[i];
   } 

    for(int i=0;i<a;i++)
   {
       cout<<b[i][0]<<endl;
   } 
}
