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
        int n,k;
        cin>>n>>k;
        vi v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        ll sum=0,sum1=0;
        for(int i=0;i<n;i++){
            sum+=v[i];
        }
        if(k<n-k){
            k=k;
        }else{
            k=n-k;
        }
        for(int i=0;i<k;i++){
            sum-=v[i];
            sum1+=v[i];

        }
        cout<<abs(sum-sum1)<<"\n";
    }
    return 0;
}
