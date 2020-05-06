#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <list>

using namespace std;

class Graph{
    long V;
    list<long> *adj;
    long dfsUtil(long v,bool vis[]);
public:
    Graph(long V);
    void addEdge(long u,long v);
    void DFS(long n,long m,long cLib,long cRoad);
};

Graph::Graph(long n){
    this->V=n;
    adj=new list<long>[n];
}

void Graph::addEdge(long u,long v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

long Graph::dfsUtil(long v,bool vis[]){
    if(!vis[v]){
        vis[v]=true;
        long count=0;
        for(auto i=adj[v].begin();i!=adj[v].end();i++){
            if(!vis[*i])
                count=count+dfsUtil(*i,vis);
        }
        return count+1;
    }
    return 0;
}

void Graph::DFS(long n,long m,long cLib,long cRoad){
    bool *vis=new bool[n+1];
    for(long i=0;i<=n;i++){
        vis[i]=false;
    }
    if(cLib<=cRoad){
        cout<<cLib*n<<"\n";
    }else{
        long lib=0,road=0;
        for(long i=1;i<=n;i++){
            if(!vis[i]){
                lib++;
                road=road+dfsUtil(i,vis)-1;
            }
        }
        cout<<(cLib*lib)+(cRoad*road)<<"\n";
    }
}

int main(){
    int q;
    cin>>q;
    while(q--){
        long n,m,cLib,cRoad,u,v;
        cin>>n>>m>>cLib>>cRoad;
        Graph g(n+1);
        for(long i=0;i<m;i++){
            cin>>u>>v;
            g.addEdge(u,v);
        }
        g.DFS(n,m,cLib,cRoad);
    }
    return 0;
}
