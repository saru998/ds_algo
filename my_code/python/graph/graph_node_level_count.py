graph = {
    "A":set(["B","G"]),
    "B":set(["A","C","D","E"]),
    "C":set(["H"]),
    "D":set(["G","B"]),
    "E":set(["F"]),
    "F":set(["E","H"]),
    "G":set(["D","F"]),
    "H":set(["C"])
}

#BFS
def bfs_level_count(graph,start):
    visited = set()
    queque = [start]
    level = set_node_level(graph)

    while queque:
        vertex = queque.pop(0)
        if vertex not in visited:
            
            visited.add(vertex)
            queque.extend(graph[vertex] - set(visited))

            for x in graph[vertex] - set(visited):
                level[x] = level[vertex] + 1

    return level
#DFS
def dfs_level_count(graph,start):
    visited = set()
    queque = [start]
    level = set_node_level(graph)

    while queque:
        vertex = queque.pop()
        if vertex not in visited:
            
            visited.add(vertex)
            queque.extend(graph[vertex] - set(visited))

            for x in graph[vertex] - set(visited):
                level[x] = level[vertex] + 1

    return level
def set_node_level(graph):
    dict_result=dict()

    for x in list(graph.keys()):
        dict_result[x]=0
    
    return dict_result

print(bfs_level_count(graph,"A"))
print(dfs_level_count(graph,"A"))
