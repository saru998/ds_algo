class Graph {
    constructor(v) {
        this.v = v
        this.garph = {}
        for (let i = 0; i < v; i++) {
           this.garph[i]=[] 
        }
    }
    add_edge(u,v){
        this.garph[u].push(v)
        this.garph[v].push(u)
    }
}

g = new Graph(5) 
g.add_edge(1, 0) 
g.add_edge(0, 2) 
g.add_edge(2, 0) 
g.add_edge(0, 3) 
g.add_edge(3, 4) 

console.log(g);
