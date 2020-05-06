#include <iostream>
#include <cstdlib>
#include <stack>
#include <algorithm>

using namespace std;

typedef long long ll;
typedef stack<ll> si;

int main(){
    ll i,j,n;
    cin>>n;
    ll a[n],ans=-1,x=0,t;
    si s;
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        while(!s.empty()){
            if(s.top()<a[i]){
                ans=max(ans,s.top() xor a[i]);
                s.pop();
            }else{
                ans=max(ans,s.top() xor a[i]);
                break;
            }
        }
        s.push(a[i]);
    }
    cout<<ans<<"\n";
    return 0;
}
