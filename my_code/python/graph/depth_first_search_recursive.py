class Graph: 
	def __init__(self,v): 
		self.graph = [None]*v

	def addEdge(self,u,v): 
		if self.graph[u] is not None:
			self.graph[u].append(v)
		else:
			self.graph[u]=[]
			self.graph[u].append(v)

	def DFSUtil(self, v, visited): 
		visited[v] = True
		print(v)
		for i in self.graph[v]: 
			if visited[i] == False: 
				self.DFSUtil(i, visited) 
				
	def DFS(self): 
		V = len(self.graph) 
		visited =[False]*(V)
		for i in range(V): 
			if visited[i] == False: 
				self.DFSUtil(i, visited) 


g = Graph(4) 
g.addEdge(0, 1) 
g.addEdge(0, 2) 
g.addEdge(1, 2) 
g.addEdge(2, 0) 
g.addEdge(2, 3) 
g.addEdge(3, 3) 

print("Following is Depth First Traversal")
g.DFS() 
