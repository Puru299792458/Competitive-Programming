#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

bool compare(ll i,ll j){
    return i>j;
}

int main(){
    ll n;
    cin>>n;
    vi v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end(),compare);
    ll max=0;
    for(ll i=0;i<n;i++){
        max+=pow(2,i)*v[i];
    }
    cout<<max<<"\n";
    return 0;
}
