#include <iostream>
#include <cstdlib>
#include <stack>
#include <algorithm>
#include <string>

#define MAX 1000001

using namespace std;

typedef long long ll;
typedef stack<ll> si;

int main(){
    string str;
    cin>>str;
    si s;
    s.push(-1);
    ll ind,result=0;
    ll a[MAX]={0};
    for(ll i=0;i<str.length();i++){
        if(str[i]=='('){
            s.push(i);
        }else if(str[i]==')'){
            s.pop();
            if(!s.empty()){
                ind=i-s.top();
                if(result<=ind){
                    result=ind;
                    a[result]+=1;
                }
            }else{
                s.push(i);
            }
        }
    }
    if(result!=0)
        cout<<result<<" "<<a[result]<<"\n";
    else
        cout<<0<<" "<<1<<"\n";
    return 0;
}
