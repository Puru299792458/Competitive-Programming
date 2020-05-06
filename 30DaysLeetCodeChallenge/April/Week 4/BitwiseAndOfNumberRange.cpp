#include <iostream>
#include <cstdlib>

using namespace std;

typedef long long ll;

int getMSBPos(ll num){
    int msb =-1;//Position of MSB
    while(num){
        num = num >>1;
        msb++;
    }
    return msb;
}

int main(){
    int m,n;
    ll res=0;
    cin>>m>>n;
    while (m && n){
        int msbM = getMSBPos(m);
        int msbN = getMSBPos(n);
        if(msbM != msbN){
            break;
        }
        ll msbVal = (1<< msbM);
        res += msbVal;
        m = m-msbVal;
        n = n-msbVal;
    }
    cout<<res<<"\n";
    return 0;
}
