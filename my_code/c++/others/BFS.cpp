#include <iostream>
using namespace std;

class Graph
{
    int V;
    list<int> *li;
    
    Public:
    Graph(int V);
    void addEdge(int v,int w);
}
Graph::Graph(int V)
{
    this.V=V;
    li=new list<int>[V];
}
void Graph::addEdge(int v,int w)
{
    li[v].push_back(w);
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