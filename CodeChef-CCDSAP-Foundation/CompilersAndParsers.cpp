#include <iostream>
#include <cstdlib>
#include <stack>
#include <string>

using namespace std;

typedef stack<char> si;
typedef long long ll;

int main(){
    int t;
    cin>>t;
    while(t--){
        ll i,count=0,len=0;
        string str;
        cin>>str;
        for(i=0;i<str.length();i++){
            if(str[i]=='>')
                count--;
            else
                count++;
            if(count==0)
                len = i+1;
            else if(count<0)
                break;
        }
        cout<<len<<"\n";
    }
    return 0;
}
