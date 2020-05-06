#include <iostream>
#include <cstdlib>
#include <list>

using namespace std;

class Graph{
    int V;
    list<int> *adj;
    bool isCyclicUtil(int v,bool vis[],bool *recStack);
public:
    Graph(int V);
    void addEdge(int u,int v);
    bool isCyclic();
};

Graph::Graph(int V){
    this->V=V;
    adj=new list<int>[V];
}

void Graph::addEdge(int u,int v){
    adj[u].push_back(v);
}

bool Graph::isCyclicUtil(int v,bool vis[],bool *recStack){
    if(!vis[v]){
        vis[v]=true;
        recStack[v]=true;
        list<int>::iterator it;
        for(it=adj[v].begin();it!=adj[v].end();it++){
            if(!vis[*it] && isCyclicUtil(*it,vis,recStack))
                return true;
            else if(recStack[*it])
                return true;
        }
    }
    recStack[v]=false;
    return false;
}

bool Graph::isCyclic(){
    bool *vis=new bool[V];
    bool *recStack=new bool[V];
    for(int i=0;i<V;i++){
        vis[i]=false;
        recStack[i]=false;
    }
    for(int i=0;i<V;i++){
        if(isCyclicUtil(i,vis,recStack))
            return true;
    }
    return false;
}

int main(){
    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);
    if(g.isCyclic())
        cout << "Graph contains cycle\n";
    else
        cout << "Graph doesn't contain cycle\n";
    return 0;
}
