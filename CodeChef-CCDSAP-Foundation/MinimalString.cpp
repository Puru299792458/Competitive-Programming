#include <iostream>
#include <cstdlib>
#include <string>
#include <stack>

#define MAX 27

using namespace std;

typedef stack<char> si;
typedef long long ll;
int main(){
    string s,ans="";
    ll a[MAX]={0};
    char c;
    cin>>s;
    si st;
    for(ll i=0;i<s.length();i++){
        a[s[i]-97]++;
    }
    for(ll i=0;i<s.length();i++){
        if(st.empty()){
            st.push(s[i]);
            a[s[i]-97]--;
        }else{
            int f=0;
            for(int k=0;k<(st.top()-97);k++){
                if(a[k]>0){
                    f=1;
                    break;
                }
            }
            if(f){
                st.push(s[i]);
                a[s[i]-97]--;
            }else{
                ans+=st.top();
                st.pop();
                i--;
            }
        }
    }
    while(!st.empty()){
        ans+=st.top();
        st.pop();
    }
    cout<<ans<<"\n";
    return 0;
}
