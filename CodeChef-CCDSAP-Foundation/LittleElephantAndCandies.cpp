#include <iostream>
#include <cstdlib>
#include <algorithm>

using namespace std;

typedef long long ll;

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,c;
        cin>>n>>c;
        ll a[n];
        for(ll i=0;i<n;i++){
            cin>>a[i];
            c-=a[i];
        }
        if(c>=0){
            cout<<"Yes\n";
        }else{
            cout<<"No\n";
        }
    }
    return 0;
}
