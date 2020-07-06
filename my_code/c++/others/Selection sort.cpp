#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int arr[10]={5,3,8,7,2,9,1,0,4,6};
    int temp;
    
    cout<<"Unsorted array:";
    for(int i=0;i<10;i++)
    {
        cout<<arr[i];
    }
    cout<<endl;
    
    for(int i=0;i<10;i++)
    {
        for(int j=i+1;j<10;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    
     cout<<"Sorted array:";
    for(int i=0;i<10;i++)
    {
        cout<<arr[i];
    }
}

