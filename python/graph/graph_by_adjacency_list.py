class AdjNode: 
    def __init__(self, data): 
        self.vertex = data 
        self.next = None

class Graph: 
    def __init__(self, vertices): 
        self.V = vertices 
        self.graph = [None] * self.V
  
    def add_edge(self, src, dest): 
        
        #undirected graph
        #made node of dest attached to src
        node = AdjNode(dest) 
        node.next = self.graph[src] 
        self.graph[src] = node 
  
        #made node of src attached to dest
        node = AdjNode(src) 
        node.next = self.graph[dest] 
        self.graph[dest] = node 
  
    def print_graph(self):
        for i in range(self.V): 
            print("Adjacency list of vertex {}\n head".format(i), end="") 
            temp = self.graph[i] 
            while temp: 
                print(" -> {}".format(temp.vertex), end="") 
                temp = temp.next
            print(" \n") 
  
  
graph = Graph(5) 
graph.add_edge(0, 1) 
graph.add_edge(0, 4) 
graph.add_edge(1, 2) 
graph.add_edge(1, 3) 
graph.add_edge(1, 4) 
graph.add_edge(2, 3) 
graph.add_edge(3, 4)

graph.print_graph() 

"""
Adjacency list of vertex 0
 head -> 4 -> 1 

Adjacency list of vertex 1
 head -> 4 -> 3 -> 2 -> 0 

Adjacency list of vertex 2
 head -> 3 -> 1 

Adjacency list of vertex 3
 head -> 4 -> 2 -> 1 

Adjacency list of vertex 4
 head -> 3 -> 1 -> 0
 
"""