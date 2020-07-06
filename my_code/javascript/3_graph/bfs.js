const graph = {
    'A': new Set(['B', 'C']),
    'B': new Set(['A', 'D', 'E']),
    'C': new Set(['A', 'F']),
    'D': new Set(['B']),
    'E': new Set(['B', 'F']),
    'D': new Set(['C', 'E']),
    'F': new Set(['C', 'E'])
}

const bfs = (graph, start) => {
    const queue = [start]
    const visited = new Set()

    while (queue.length) {
        vertex = queue.shift()

        if (!visited.has(vertex)) {
            visited.add(vertex)

            //graph[vertex] - vertex
            const diff = [...graph[vertex]].filter(x => x != vertex)
            Array.prototype.push.apply(queue, diff)
        }
    }
    return visited
}

const a = bfs(graph, 'A')
console.log(a);

