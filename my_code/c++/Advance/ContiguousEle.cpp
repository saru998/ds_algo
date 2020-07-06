#include <iostream>
using namespace std;

int min(int a,int b){return a<b?a:b;}
int max(int a,int b){return a>b?a:b;}

int findLength(int arr[],int n)
{
    int count=1;
    
    for(int i=0;i<n-1;i++)
    {
        int mn=arr[i];
        int mx=arr[i];
        
        for(int j=i+1;j<n;j++)
        {
            mn=min(mn,arr[j]);
            mx=max(mx,arr[j]);
            
            if(mx-mn==j-i)
            {
                count=max(count,mx-mn+1);
            }
        
        }
      
        
    }
    return count;
}
int main()
{
    int arr[] = {1, 56, 58, 57, 90, 92, 94, 93, 91, 45};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    cout << "Length of the longest contiguous subarray is "
         << findLength(arr, n);
    return 0;
}
