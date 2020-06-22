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
    bool isTree();
    bool isCyclic(int v,bool visited[],int parent);
};
Graph::Graph(int V)
{
    this->V=V;
    li=new list<int>[V];
}
void Graph::addEdge(int v,int w)
{
    li[v].push_back(w);
    li[w].push_back(v);
}
bool Graph::isCyclic(int v,bool visited[],int parent)
{
    visited[v]=true;
    
    
    list<int>::iterator i;
    for(i=li[v].begin();   i!=li[v].end();    i++)
    {


            int check=*i;
            
            if(!visited[*i])
            {
                if(isCyclic(*i,visited,v))
                return true;
                
            }
            else if(*i!=parent)
              return true;
            
    }
    return false;    
}
bool Graph::isTree()
{
    bool *visited=new bool[V];
    
    for(int i=0;i<V;i++)
    {
        visited[i]=false;
    }
    
    if(isCyclic(0,visited,-1))
    return false;
    
    for(int i=0;i<V;i++)
    {
        if(!visited[i])
        return false;
    }
    
    return true;
    
}
int main()
{
    Graph g1(5);
    g1.addEdge(1, 0);
    g1.addEdge(0, 2);
    g1.addEdge(0, 3);
    g1.addEdge(3, 4);
    g1.isTree()? cout << "Graph is Tree\n":
                 cout << "Graph is not Tree\n";
   
}

