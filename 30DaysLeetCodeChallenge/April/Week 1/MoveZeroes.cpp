#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>

using namespace std;

typedef vector<int> vi;

int main(){
    vi v;
    int n,val,cnt=0;
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>val;
        v.push_back(val);
    }
    for (int i=0;i<v.size();i++){
        if (v[i] != 0){
            v[cnt++] = v[i];
        }
    }
    while(cnt<n){
        v[cnt++] = 0;
    }
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }cout<<"\n";
    return 0;
}
