#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

typedef long long ll;

int main(){
    int t;
    cin>>t;
    while(t--){
        ll cnt=0;
        int n;
        cin>>n;
        string str;
        cin>>str;
        for(int i=0;i<n;i++){
            if(str[i]=='1')
                cnt+=1;
        }
        cout<<(cnt*(cnt+1))/2<<"\n";
    }
    return 0;
}
