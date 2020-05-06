#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

typedef vector<int> vi;
typedef vector<vi> vii;

int main(){
    vii v(6);
    int val;
    for(int i=0;i<6;i++){
        v[i].resize(6);
        for(int j=0;j<6;j++){
            cin>>v[i][j];
        }
    }
    int max_val=-9999999;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            max_val=max(max_val,v[i][j]+v[i][j+1]+v[i][j+2]+v[i+1][j+1]+v[i+2][j]+v[i+2][j+1]+v[i+2][j+2]);
        }
    }
    cout<<max_val<<"\n";
    return 0;
}
