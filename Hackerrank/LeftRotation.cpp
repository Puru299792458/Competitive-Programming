#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>

using namespace std;

typedef vector<int> vi;
typedef vi::iterator itr;

int main(){
    int n,d,val;
    cin>>n>>d;
    vi v,r;
    for(int i=0;i<n;i++){
        cin>>val;
        v.push_back(val);
    }
    for(int i=d;i<n;i++){
        r.push_back(v[i]);
    }
    for(int i=0;i<d;i++){
        r.push_back(v[i]);
    }
    itr i;
    for(i=r.begin();i!=r.end();i++){
        cout<<*i<<" ";
    }cout<<"\n";
    return 0;
}
