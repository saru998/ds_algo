#include <iostream>
#include <list>
#include <queue>
using namespace std;

//BFS for directed graphs
struct pairs
{
    int v;
    int movecount;
};

int getMinDiceThrows(int moves[],int N)
{
    bool *visited=new bool[N];
    for(int i=0;i<N;i++)
    {
        visited[i]=false;
    }
    
    queue<pairs> q;
    pairs s={0,0};
    q.push(s);//because first always is 0,0
    
    pairs p;
    
    
    while(!q.empty())
    {
        p=q.front();
        q.pop();
        int v=p.v;
        
        if(v==N-1)
        break;
        
        for(int j=v+1;j<v+6;j++)//finding out possiblities of next 6 moves and adding up to queue
        {
           
           if(!visited[j])//oncs visited doesnt need to add up in queue
           {
                pairs p2;//another structure to hold vertices and its movecount
                p2.movecount=p.movecount+1;
                visited[j]=true;
                
                if(moves[j]!=-1)
                p2.v=moves[j];
                else
                p2.v=j;
                
                q.push(p2);
           }
           
            
        }
    }
    return p.movecount;//p will the last node in queque having who will reach n,n its movecount will tell min moves needed
}

int main()
{
    int N = 30;
    int moves[N];
    for (int i = 0; i<N; i++)
        moves[i] = -1;
 
    // Ladders
    moves[2] = 21;
    moves[4] = 7;
    moves[10] = 25;
    moves[19] = 28;
 
    // Snakes
    moves[26] = 0;
    moves[20] = 8;
    moves[16] = 3;
    moves[18] = 6;
 
    cout << "Min Dice throws required is " << getMinDiceThrows(moves, N);
    return 0;

}
