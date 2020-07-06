#include <iostream>
#include <list>
using namespace std;

class Graph
{
    int V;
    list<int> *li;
    
    public:
    Graph(int V);
    void addEdge(int v,int w);
    void DFSUtil(int v,bool visited[]);
    void DFS();
};
Graph::Graph(int V)
{
    this->V=V;
    li=new list<int>[V];
}
void Graph::addEdge(int v,int w)
{
    li[v].push_back(w);
}
void Graph::DFS()
{
    bool *visited=new bool[V];
    for(int i=0;i<V;i++)
    {
        visited[i]=false;
    } 
    
    DFSUtil(0,visited);
    
}
void Graph::DFSUtil(int v,bool visited[])
{
        cout<<v;
        visited[v]=true;
        
        list<int>::iterator i;
        
        for(i=li[v].begin();   i!=li[v].end();    i++)
        {
           
            if(!visited[*i])
            {
                DFSUtil(*i,visited);
            }
        }
        
        
    
}
int main()
{
    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);
 
    cout << "Following is Depth First Traversal\n";
    g.DFS();
}
