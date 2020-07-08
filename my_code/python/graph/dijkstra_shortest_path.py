import sys


class Graph(object):
    def __init__(self, v):
        self.v = v
        self.graph = []

    def dijkstra(self, start):

        # step1: intialiaze
        visited = [False for x in range(self.v)]
        min_dist = [sys.maxsize for x in range(self.v)]
        min_dist[start] = 0

        for _ in range(self.v):

            # step2: find min distance and mark visited
            min_value = sys.maxsize
            min_index = 0
            for y in range(self.v):
                if min_dist[y] < min_value and not visited[y]:
                    min_value = min_dist[y]
                    min_index = y
            visited[min_index] = True

            # step3: update cumulative min distance of discovered node
            for z in range(self.v):
                if self.graph[min_index][z]:
                    culmulative_dist = self.graph[min_index][z] + \
                        min_dist[min_index]

                    if (culmulative_dist < min_dist[z]) and not visited[z]:
                        min_dist[z] = culmulative_dist
        print(min_dist)


g = Graph(9)
g.graph = [[0, 4, 0, 0, 0, 0, 0, 8, 0],
           [4, 0, 8, 0, 0, 0, 0, 11, 0],
           [0, 8, 0, 7, 0, 4, 0, 0, 2],
           [0, 0, 7, 0, 9, 14, 0, 0, 0],
           [0, 0, 0, 9, 0, 10, 0, 0, 0],
           [0, 0, 4, 14, 10, 0, 2, 0, 0],
           [0, 0, 0, 0, 0, 2, 0, 1, 6],
           [8, 11, 0, 0, 0, 0, 1, 0, 7],
           [0, 0, 2, 0, 0, 0, 6, 7, 0]
           ]

g.dijkstra(0)
