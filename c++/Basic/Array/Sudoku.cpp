#include <iostream>
using namespace std;

bool ifbox(int Grid[4][4],int row,int col,int n);
bool ifrowcol(int Grid[4][4],int row,int col,int n);
bool issafe(int Grid[4][4],int row,int col,int n);
bool Emptycell(int Grid[4][4],int &row,int &col);
bool Sudoku(int Grid[4][4]);
void printsudoku(int Grid[4][4]);

int main()
{
 
   int Grid[4][4]={ 0,0,  0,0,
                    0,0,  0,0,
                    
                    0,0,  0,0,
                    0,0,  0,0};
    printsudoku(Grid);
   
   if(Sudoku(Grid))
   cout<<"\ngood\n\n";
   
   else cout<<"\nNope not good\n\n";
   
   printsudoku(Grid);
}

bool ifrowcol(int Grid[4][4],int row,int col,int n)
{
    
    for(int i=0;i<4;i++)
    {
        
        if(Grid[i][col]==n && i!=row)       //vertical check
        return false;
    }

    
    for(int j=0;j<4;j++)
    {
        if(Grid[row][j]==n && j!=col)       //horizontal check
        return false;
    }
    
    return true;
}

bool ifbox(int Grid[4][4],int row,int col,int n)
{
    
    int startrow=row-row%2;
    int startcol=col-col%2;
    
    for(int i=startrow;i<2;i++)
    {
       for(int j=startcol;j<2;j++)
       {
           if(Grid[i][j]==n)
           {
               return false;
           }
       }
    }
    return true;
}

bool issafe(int Grid[4][4],int row,int col,int n)
{
    if(ifrowcol(Grid,row,col,n) && ifbox(Grid,row,col,n))
    return true;
    
    else
    return false;
}

bool Emptycell(int Grid[4][4],int &row,int &col)
{
   for(row=0;row<4;row++)
   {
       for(col=0;col<4;col++)
       {
           if(Grid[row][col]==0)
           return true;
       }
   }
   return false;
}

bool Sudoku(int Grid[4][4])
{
   int row,col;
   if(!Emptycell(Grid,row,col))
   return true;
   
   
   for(int num=1;num<=4;num++)
   {
       //cout<<row<<col<<num<<endl;
       
       if(issafe(Grid,row,col,num))
       {
           Grid[row][col]=num;
       
           if(Sudoku(Grid) && Grid[0][0]==1)
           return true;
       }
       
       
       Grid[row][col]==0;
   }
   return false;
}

void printsudoku(int Grid[4][4])
{
   for(int i=0;i<4;i++)
   {
       for(int j=0;j<4;j++)
       {
           cout<<Grid[i][j];
       }
       cout<<endl;
   }
}