#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

#define N 4

typedef vector<int> vi;
typedef vector<vi> vii;

bool isSafe(vii v,int row,int col){
    int i,j;
    for(i=0;i<col;i++){
        if(v[row][i])
            return false;
    }
    //Check Upper Diagonal
    for(i=row,j=col;i>=0&&j>=0;i--,j--){
        if(v[i][j])
            return false;
    }
    //Check lower Diagonal
    for(i=row,j=col;i<N&&j>=0;j--,i++){
        if(v[i][j])
            return false;
    }
    return true;
}

bool solveNqUtil(vii &v,int col){
    if(col==N){
        for(int i=0;i<v.size();i++){
            for(int j=0;j<v[i].size();j++){
                cout<<v[i][j]<<" ";
            }
            cout<<"\n";
        }
        cout<<"\n";
        return true;
    }
    bool res=false;
    for(int i=0;i<N;i++){
        if(isSafe(v,i,col)){
            v[i][col]=1;
            res=solveNqUtil(v,col+1)||res;
            v[i][col]=0;
        }
    }
    return res;
}

void solveNQueen(){
    vii v(N,vi(N,0));
    if(solveNqUtil(v,0)==false){
        cout<<"Solution does not exist\n";
        return;
    }
    //for(int i=0;i<v.size();i++){
    //    for(int j=0;j<v[i].size();j++){
    //        cout<<v[i][j]<<" ";
    //    }
    //    cout<<"\n";
    //}
    return ;
}

int main(){
    solveNQueen();
    return 0;
}
