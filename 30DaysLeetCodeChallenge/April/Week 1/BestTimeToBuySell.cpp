#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

typedef vector<int> vi;

int main(){
    int n,val;
    cin>>n;
    vi v;
    for(int i=0;i<n;i++){
        cin>>val;
        v.push_back(val);
    }
    int res =0;
    for(int i=1;i<v.size();i++){
        if (v[i]>v[i-1]){
            res+= v[i]-v[i-1];
        }
    }
    cout<<res<<"\n";
    return 0;
}
