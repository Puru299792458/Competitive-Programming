#include <iostream>
#include <cstdlib>
#include <cmath>

#define M 1000000007

using namespace std;

typedef long long ll;

ll repeated_square(ll base,ll exp){
    ll res=1;
    if(exp==0)
        return 1;
    res=repeated_square(base,exp/2);
    res=(res*res)%M;
    if(exp%2)
        res=(res*base)%M;
    return res;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,n1,n2,res;
        cin>>n;
        n++;
        n1=n/2;n2=n-n1;
        res=repeated_square(2,n1)+repeated_square(2,n2)-2;
        cout<<(int)(res%M)<<"\n";
    }
    return 0;
}
