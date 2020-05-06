#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

typedef long long ll;

int main(){
    ll cnt=0;
    string str;
    int n;
    cin>>str;
    cin>>n;
    if(str.length()==1 && str[0]=='a'){
        cout<<n<<"\n";
        return 0;
    }
    if(str.length()==n){
        for(int i=0;i<str.length();i++){
            if(str[i]=='a')
                ++cnt;
        }
        cout<<cnt<<"\n";
        return 0;
    }
    if(n<str.length()){
        for(int i=0;i<n;i++){
            if(str[i]=='a')
                ++cnt;
        }
        cout<<cnt<<"\n";
        return 0;
    }
    for(int i=0;i<str.length();i++){
        if(str[i]=='a')
            ++cnt;
    }
    if(n%str.length()==0){
        cnt=cnt*(n/str.length());
        cout<<cnt<<"\n";
        return 0;
    }else{
        cnt=cnt*(n/str.length());
        ll cnt2=0;
        for(int i=0;i<n%str.length();i++){
            if(str[i]=='a')
                ++cnt2;
        }
        cnt+=cnt2;
        cout<<cnt<<"\n";
        return 0;
    }
    return 0;
}
