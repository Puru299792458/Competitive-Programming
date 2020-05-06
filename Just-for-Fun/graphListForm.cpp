#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

typedef vector<int> vi;

void addEdge(vi v[],int x,int y){
    v[x].push_back(y);
    v[y].push_back(x);
}

void printGraph(vi v[],int V){
    for(int i=0;i<V;i++){
        cout<<"Adjacency List of vertex :"<<i<<"\nhead";
        for(auto x:v[i])
            cout<<"->"<<x;
        cout<<"\n";
    }
}

int main(){
    int V=5;
    vi v[V];
    addEdge(v,0,1);
    addEdge(v,0,4);
    addEdge(v,1,2);
    addEdge(v,1,3);
    addEdge(v,1,4);
    addEdge(v,2,3);
    addEdge(v,3,4);
    printGraph(v,V);
    return 0;
}
