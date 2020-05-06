#include <iostream>
#include <cstdlib>
#include <stack>

using namespace std;

typedef long long ll;
typedef stack<ll> si;


int main(){
    while(true){
        int i,n,t;
        si s;
        ll max_a=0,area_top;
        cin>>n;
        if(n==0)
            return 0;
        ll a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
        }i=0;
        while(i<n){
            if(s.empty() || a[s.top()]<=a[i])
                s.push(i++);
            else{
                t=s.top();
                s.pop();
                area_top=a[t]*(s.empty()?i:i-s.top()-1);
                if(max_a<area_top)
                    max_a=area_top;
            }
        }
        while(!s.empty()){
            t=s.top();
            s.pop();
            area_top=a[t]*(s.empty()?i:i-s.top()-1);
            if(max_a<area_top)
                max_a=area_top;
        }
        cout<<max_a<<"\n";
    }
    return 0;
}
