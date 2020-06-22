#include <iostream>
#include <math.h>
using namespace std;
bool ifbox(int **Grid2,int row,int col,int n,int N);
bool ifrowcol(int **Grid2,int row,int col,int n,int N);
bool issafe(int **Grid2,int row,int col,int n,int N);
bool Emptycell(int **Grid2,int &row,int &col,int N);
bool Sudoku(int **Grid2,int N);
void printsudoku(int **Grid,int N);

int main()
{
   int N=4;
   N=sqrt(N);
   
   int **Grid = new int*[N*N];
   for(int i = 0; i < N*N; i++)
        Grid[i] = new int[N*N];
        
   for(int i=0;i<N*N;i++)
   {
       for(int j=0;j<N*N;j++)
       {
           Grid[i][j]=0;
       }
   }
   printsudoku(Grid,N);
   
   if(Sudoku(Grid,N))
   cout<<"\ngood\n\n";
   
   else cout<<"\nNope not good\n\n";
   
   printsudoku(Grid,N);
}

bool ifrowcol(int **Grid2,int row,int col,int n,int N)
{
    int **Grid = new int*[N*N];
    for(int i = 0; i < N*N; i++)
        Grid[i] = new int[N*N];

    for(int i=0;i<N*N;i++)
    {
        for(int j=0;j<N*N;j++)
        {
            Grid[i][j]=Grid2[i][j];
        }
    }
    
    //cout<<Grid2[0][0]<<endl;
    
    for(int i=0;i<N*N;i++)
    {
        
        if(Grid[i][col]==n && i!=row)       //vertical check
        return false;
    }

    
    for(int j=0;j<N*N;j++)
    {
        if(Grid[row][j]==n && j!=col)       //horizontal check
        return false;
    }
    
    return true;
}

bool ifbox(int **Grid2,int row,int col,int n,int N)
{
    int **Grid = new int*[N*N];
    for(int i = 0; i < N*N; i++)
        Grid[i] = new int[N*N];

    for(int i=0;i<N*N;i++)
    {
        for(int j=0;j<N*N;j++)
        {
            Grid[i][j]=Grid2[i][j];
        }
    }
    
    int startrow=row-row%N;
    int startcol=col-col%N;
    
    for(int i=startrow;i<N;i++)
    {
       for(int j=startcol;j<N;j++)
       {
           if(Grid[i][j]==n)
           {
               return false;
           }
       }
    }
    return true;
}

bool issafe(int **Grid2,int row,int col,int n,int N)
{
    int **Grid = new int*[N*N];
    for(int i = 0; i < N*N; i++)
        Grid[i] = new int[N*N];

    for(int i=0;i<N*N;i++)
    {
        for(int j=0;j<N*N;j++)
        {
            Grid[i][j]=Grid2[i][j];
        }
    }
    
    if(ifrowcol(Grid,row,col,n,N) && ifbox(Grid,row,col,n,N))
    return true;
    
    else
    return false;
}

bool Emptycell(int **Grid2,int &row,int &col,int N)
{
   int **Grid = new int*[N*N];
    for(int i = 0; i < N*N; i++)
        Grid[i] = new int[N*N];

    for(int i=0;i<N*N;i++)
    {
        for(int j=0;j<N*N;j++)
        {
            Grid[i][j]=Grid2[i][j];
        }
    }
    
    for(row=0;row<N*N;row++)
   {
       for(col=0;col<N*N;col++)
       {
           if(Grid[row][col]==0)
           return true;
       }
   }
   return false;
}

bool Sudoku(int **Grid2,int N)
{
    int **Grid = new int*[N*N];
    for(int i = 0; i < N*N; i++)
        Grid[i] = new int[N*N];

    for(int i=0;i<N*N;i++)
    {
        for(int j=0;j<N*N;j++)
        {
            Grid[i][j]=Grid2[i][j];
        }
    }
    
    int row,col;
   if(!Emptycell(Grid,row,col,N))
   return true;
   
   
   for(int num=1;num<=N*N;num++)
   {
       //cout<<row<<col<<num<<endl;
       
       if(issafe(Grid,row,col,num,N))
       {
           Grid[row][col]=num;
       
           if(Sudoku(Grid,N) && Grid[0][0]==1)
           return true;
       }
       
       
       Grid[row][col]==0;
   }
   return false;
}

void printsudoku(int **Grid2,int N)
{
   int **Grid = new int*[N*N];
    for(int i = 0; i < N*N; i++)
        Grid[i] = new int[N*N];

    for(int i=0;i<N*N;i++)
    {
        for(int j=0;j<N*N;j++)
        {
            Grid[i][j]=Grid2[i][j];
        }
    }
   
   for(int i=0;i<4;i++)
   {
       for(int j=0;j<4;j++)
       {
           cout<<Grid[i][j];
       }
       cout<<endl;
   }
}