#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <list>
#include <vector>
#include <queue>
using namespace std;

class Graph{
    int V;
    list<int> *adj;
public:
    Graph(int V);
    void addEdge(int u,int v);
    void topologicalSort();
};

Graph::Graph(int V){
    this->V=V;
    adj= new list<int>[V];
}

void Graph::addEdge(int u,int v){
    adj[u].push_back(v);
}

void Graph::topologicalSort(){
    vector<int> inDegree(V,0);
    for(int i=0;i<V;i++){
        list<int>::iterator itr;
        for(itr=adj[i].begin();itr!=adj[i].end();itr++)
            ++inDegree[*itr];
    }
    queue<int> q;
    for(int i=0;i<V;i++){
        if(inDegree[i]==0)
            q.push(i);
    }
    int cnt=0;
    vector<int> topOrder;
    while(!q.empty()){
        int u=q.front();
        q.pop();
        topOrder.push_back(u);
        list<int>::iterator itr;
        for(itr=adj[u].begin();itr!=adj[u].end();itr++){
            if(--inDegree[*itr]==0)
                q.push(*itr);
        }
        ++cnt;
    }
    if(cnt!=V){
        cout<<"There exist a cycle\n";
        return ;
    }
    for(int i=0;i<topOrder.size();i++){
        cout<<topOrder[i]<<" ";
    }
    cout<<"\n";
}

int main(){
    Graph g(6);
    g.addEdge(5, 2);
    g.addEdge(5, 0);
    g.addEdge(4, 0);
    g.addEdge(4, 1);
    g.addEdge(2, 3);
    g.addEdge(3, 1);
    cout << "Following is a Topological Sort of\n";
    g.topologicalSort();
    return 0;
}
