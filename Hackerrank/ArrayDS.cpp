#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

typedef vector<int> vi;
typedef vi::iterator it;

int main(){
    vi v;
    int n,val;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>val;
        v.push_back(val);
    }
    for(int i=0;i<v.size()/2;i++){
        swap(v[i],v[v.size()-1-i]);
    }
    it i;
    for(i=v.begin();i!=v.end();i++){
        cout<<*i<<" ";
    }cout<<"\n";
    return 0;
}
