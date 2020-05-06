#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

typedef long int li;
typedef long long ll;

int main(){
    ll t;
    cin>>t;
    while(t--){
        string n;
        cin>>n;
        ll sum=0,sumTemp=0;
        for(ll i=0;i<n.length();i++){
            sum=sum+(n[i]-'0');
        }
        for(int i=0;i<=9;i++){
            sumTemp=sum+i;
            if(sumTemp%10==0){
                n=n+to_string(i);
                break;
            }
        }
        cout<<n<<"\n";
    }
    return 0;
}
