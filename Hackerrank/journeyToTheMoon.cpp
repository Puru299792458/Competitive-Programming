#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <list>

using namespace std;

class Graph{
    long V;
    list<long> *adj;
    long long vertices;
    void dfsUtil(int v,bool vis[]);
public:
    Graph(long V);
    void addEdge(long u,long v);
    void DFS();
};

Graph::Graph(long V){
    this->V=V;
    vertices=0;
    adj=new list<long>[V];
}

void Graph::addEdge(long u,long v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void Graph::DFS(){
    bool *vis=new bool[V];
    for(int i=0;i<V;i++){
        vis[i]=false;
    }
    long long val=V*(V-1)/2;
    cout<<val<<"\n";
    for(long long i=0;i<V;i++){
        vertices=0;
        dfsUtil(i,vis);
        val=val-(vertices*(vertices-1))/2;
    }
    cout<<val<<"\n";
}

void Graph::dfsUtil(int v,bool vis[]){
    vis[v]=true;
    vertices++;
    for(auto itr=adj[v].begin();itr!=adj[v].end();itr++){
        if(!vis[*itr]){
            dfsUtil(*itr,vis);
        }
    }
}

int main(){
    long n,p;
    cin>>n>>p;
    long p1,p2;
    Graph g1(n);
    for(int i=0;i<p;i++){
        cin>>p1>>p2;
        g1.addEdge(p1,p2);
    }
    g1.DFS();
    return 0;
}
