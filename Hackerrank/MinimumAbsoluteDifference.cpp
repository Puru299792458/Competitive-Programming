#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

int main(){
    int n;
    cin>>n;
    vi v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int i;
    ll min_ele=1000000;
    for(i=0;i<n-1;i++){
        min_ele=min(min_ele,abs(v[i]-v[i+1]));
    }
    cout<<min_ele<<"\n";
    return 0;
}
