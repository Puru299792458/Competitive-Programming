#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

int main(){
    ll n,q,x=0;
    cin>>n>>q;
    vi v(n,0);
    while(q--){
        ll a,b,s;
        cin>>a>>b>>s;
        a=a-1;b=b-1;
        v[a]+=s;
        if((b+1)<=n)
            v[b+1]-=s;
    }
    ll max_val=0;
    for(ll i=0;i<v.size();i++){
        x=x+v[i];
        if(max_val<x){
            max_val=x;
        }
    }
    cout<<max_val<<"\n";
    return 0;
}
