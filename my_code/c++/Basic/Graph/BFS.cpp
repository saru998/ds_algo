#include <iostream>
#include <list>
using namespace std;

class Graph
{
    int V;
    list<int> *li;
    
    public:
    Graph(int V);
    void Addedges(int v,int w);
    void BFS(int s);
};
Graph::Graph(int V)
{
    this->V=V;
    li=new list<int>[V];
}
void Graph::Addedges(int v,int w)
{
    li[v].push_back(w);
}
void Graph::BFS(int s)
{
    bool *visited=new bool[V];
    for(int i=0;i<V;i++)
    {
        visited[i]=false;
    }
    
    list<int> queue;
    queue.push_back(s);
    visited[s]=true;
    
    list<int>::iterator i;
    
    while(!queue.empty())
    {
        int temp=queue.front();
        queue.pop_front();
        cout<<temp<<":";
        
        for(i=li[temp].begin();   i!=li[temp].end();    i++)
        {
           
            if(!visited[*i])
            {
                visited[*i]=true;
                queue.push_back(*i);
            }
        }
        
        
    }
}
int main()
{
   Graph g(4);
   g.Addedges(0,1);
   g.Addedges(0,2);
   g.Addedges(1,2);
   g.Addedges(2,0);
   g.Addedges(2,3);
   g.Addedges(3,3);
   
   g.BFS(2);
}

/*
queue[0]-li-li-li
queue[1]-li-li-li
0-1,2
1-2
2-0,3
3-3
output 2031
*/