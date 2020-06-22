#include<iostream>
#include<stack>
using namespace std;

void printLeftSmall(int arr[],int n)
{
    stack<int> S;
    for(int i=0;i<n;i++)
    {
        while(!S.empty() && arr[i]<=S.top())
        S.pop();
        
        if(S.empty())
        cout<<"_,";
        else
        cout<<S.top();
        
        S.push(arr[i]);
    }
    
}
int main()
{
    int arr[] = {1, 3, 0, 2, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    printLeftSmall(arr, n);
    
    return 0;
}