#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <vector>

using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main(){
    int n;
    ll d;
    cin>>n>>d;
    vi l(n);
    vi v;
    for(int i=0;i<n;i++){
        cin>>l[i];
    }
    sort(l.begin(),l.end());
    int i;
    for(i=0;i<n-1;){
        if(abs(l[i]-l[i+1])<=d){
            v.push_back(l[i]);
            v.push_back(l[i+1]);
            i+=2;
        }else{
            i+=1;
        }
    }
    cout<<v.size()/2<<"\n";
    return 0;
}
