#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

#define N 4

typedef vector<int> vi;
typedef vector<vi> vii;

bool isSafe(vii v,int x,int y){
    if(x>=0 && x<N && y>=0 && y<N && v[x][y]==1)
        return true;
    return false;
}

bool solveMazeUtil(vii v,int x,int y,vii &res){
    if(x==N-1 && y==N-1){
        res[x][y]=1;
        return true;
    }
    if(isSafe(v,x,y)==true){
        res[x][y]=1;
        if(solveMazeUtil(v,x+1,y,res)==true)
            return true;
        if(solveMazeUtil(v,x,y+1,res)==true)
            return true;
        res[x][y]=0;
        return false;
    }
    return false;
}

bool solveMaze(vii v){
    vii res(N,vi(N,0));
    if(solveMazeUtil(v,0,0,res)==false){
        cout<<"Solution does not exist\n";
        return false;
    }
    cout<<"\n";
    for(int i=0;i<res.size();i++){
        for(int j=0;j<res[i].size();j++){
            cout<<res[i][j]<<" ";
        }cout<<"\n";
    }
    return true;
}

int main(){
    vii v(N,vi(N,0));
    for(int i=0;i<N;i++){
       for(int j=0;j<N;j++){
           cin>>v[i][j];
        }
    }
    solveMaze(v);
    return 0;
}
