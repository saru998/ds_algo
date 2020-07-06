#include <iostream>
#define V 4
#define INF 9999
using namespace std;

void PrintGraph(int G[V][V])
{
    for(int k=0;k<V;k++)
    {
        for(int i=0;i<V;i++)
        {
            if(G[k][i]==9999)
            cout<<"INF:";
            else
            cout<<G[k][i]<<":";
        }
        cout<<endl;
    }
    
}


void MinDistance(int G[V][V])
{
    for(int k=0;k<V;k++)
    {
        for(int i=0;i<V;i++)
        {
            for(int j=0;j<V;j++)
            {
                if((G[i][k]+G[k][j])<G[i][j])
                {
                    
                    //cout<<"if true G["<<i<<"]["<<k<<"] + G["<<k<<"]["<<j<<"] < G["<<i<<"]["<<j<<"] "<<G[i][k]<<"+"<<G[k][j]<<"<"<<G[i][j]<<endl;
                    G[i][j]=G[i][k]+G[k][j];
                }
                
                
                //cout<<"k:"<<k<<" i:"<<i<<" j:"<<j<<endl;
                //else
                //cout<<"G["<<i<<"]["<<k<<"] + G["<<k<<"]["<<j<<"] < G["<<i<<"]["<<j<<"] "<<G[i][k]<<"+"<<G[k][j]<<"<"<<G[i][j]<<endl;
            }
        }
    }
    PrintGraph(G);
}


int main()
{
   int Graph[4][4]={{0,5,INF,10},
                    {INF,0,3,INF},
                    {INF,INF,0,1},
                    {INF,INF,INF,0}
                
   };
   
   
   MinDistance(Graph);
   
   
}