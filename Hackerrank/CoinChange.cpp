#include <iostream>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    long v[m];
    for(int i=0;i<m;i++){
        cin>>v[i];
    }
    long table[n+1];
    table[0]=1;
    for(int i=0;i<m;i++){
        for(int j=v[i];j<=n;j++){
            table[j]+=table[j-v[i]];
        }
    }
    cout<<table[n];
    return 0;
}
