#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

typedef vector<int> vi;
typedef vector<vi> vii;

int minPathSum(vii v){
    if(v.size()==0){
        return 0;
    }
    vii dp(v.size(),vi(v[0].size()));
    for(int i=0;i<dp.size();i++){
        for(int j=0;j<dp[i].size();j++){
            dp[i][j] += v[i][j];
            if(i>0 && j>0){
                dp[i][j]+=min(dp[i-1][j],dp[i][j-1]);
            }else if(i>0){
                dp[i][j]+=dp[i-1][j];
            }else if(j>0){
                dp[i][j]+=dp[i][j-1];
            }
        }
    }
    return dp[dp.size()-1][dp[0].size()-1];
}

int main(){
    int m,n;
    cout<<"Enter the number of rows and columns\n";
    cin>>m>>n;
    vii v(m, vi(n));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>v[i][j];
        }
    }
    cout<<minPathSum(v)<<"\n";
    return 0;
}
