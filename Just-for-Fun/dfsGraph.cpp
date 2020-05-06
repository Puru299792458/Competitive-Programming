#include <iostream>
#include <cstdlib>
#include <list>

using namespace std;

class Graph{
    int V;
    list<int> *g;
    void dfsUtil(int v,bool visited[]);
public:
    Graph(int V);
    void addEdge(int u,int v);
    void dfs();
};

Graph::Graph(int V){
    this->V=V;
    g=new list<int>[V];
}

void Graph::addEdge(int u,int v){
    g[u].push_back(v);
}

void Graph::dfsUtil(int v,bool visited[]){
    visited[v]=true;
    cout<<v<<" ";
    for(auto i=g[v].begin();i!=g[v].end();i++){
        if(!visited[*i])
            dfsUtil(*i,visited);
    }
}

void Graph::dfs(){
    bool *visited=new bool[V];
    for(int i=0;i<V;i++){
        visited[i]=false;
    }
    for(int i=0;i<V;i++){
        if(!visited[i])
            dfsUtil(i,visited);
    }
}

int main(){
    Graph gr(4);
    gr.addEdge(0, 1);
    gr.addEdge(0, 2);
    gr.addEdge(1, 2);
    gr.addEdge(2, 0);
    gr.addEdge(2, 3);
    gr.addEdge(3, 3);
    cout<<"DFS Traversal -> ";
    gr.dfs();
    return 0;
}
