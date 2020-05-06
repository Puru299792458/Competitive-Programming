#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <vector>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vi v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        ll min=v[1]-v[0];
        for(int i=2;i<n;i++){
            if(min>(v[i]-v[i-1])){
                min=v[i]-v[i-1];
            }
        }
        cout<<min<<"\n";
    }
    return 0;
}
