#include <iostream>

using namespace std;

int main()
{
    int a;
    int **arr;
    cin>>a;

    int** ary = new int*[a];
    for(int i = 0; i < a; ++i)
    ary[i] = new int[5];

    for(int i=0;i<a;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>ary[i][j];
        }
    }
    
    int a[10],b[10];
    
    for (int i=0;i<1)
    
    
    return 0;
}
