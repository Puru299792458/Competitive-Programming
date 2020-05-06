#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <vector>

using namespace std;

typedef vector<int> vi;

int main(){
    int n,d;
    cin>>n>>d;
    vi v(n,0);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vi::iterator it=v.begin();
    reverse(it,it+2);
    reverse(it+d,it+n);
    reverse(v.begin(),v.end());
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }cout<<"\n";
    return 0;
}
