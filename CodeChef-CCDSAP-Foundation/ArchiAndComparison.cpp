#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,n;
        cin>>a>>b>>n;
        if(n%2==0){
            a=abs(a);
            b=abs(b);
        }
        if(a>b)
            cout<<1<<"\n";
        if(a<b)
            cout<<2<<"\n";
        if(a==b)
            cout<<0<<"\n";
    }
    return 0;
}
