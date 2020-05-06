#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

typedef vector<int> vi;
typedef vector<vi> vii;

void dfs(vii &v,int r,int c){
    int lr = v.size();
    int lc = v[0].size();
    if(r<0 || c<0 || r>=lr || c>=lc || v[r][c]==0) return ;
    v[r][c]=0;
    dfs(v,r-1,c);
    dfs(v,r+1,c);
    dfs(v,r,c-1);
    dfs(v,r,c+1);
}

int main(){
    int m,n;
    cout<<"Enter the number of rows and columns\n";
    cin>>m>>n;
    vii v(m,vi(n));
    cout<<"Enter the grid matrix \n";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>v[i][j];
        }
    }
    int numOfIsland=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(v[i][j]==1){
                ++numOfIsland;
                dfs(v,i,j);
            }
        }
    }
    cout<<numOfIsland<<"\n";
    return 0;
}
