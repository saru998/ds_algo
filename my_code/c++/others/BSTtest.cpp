#include <iostream>
using namespace std;

class Graph
{
    int V;
    list<int> *li;
    
    Public:
    Graph(int V);
    void Addedges(int v,int w);
}
Graph::Graph(int V)
{
    this.V=V;
    li=new list<int>[V];
}
void Graph::Addedges(int v,int w)
{
    li[v].push_back(w);
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
}