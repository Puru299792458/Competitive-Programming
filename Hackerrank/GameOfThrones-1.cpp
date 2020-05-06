#include "../headers.hpp"

int main(){
    string str;
    cin>>str;
    vi v(26,0);
    for(int i=0;i<str.length();i++){
        ++v[str[i]-97];
    }
    int k=0;
    for(int i=0;i<26;i++){
        if(v[i]!=0){
            if(v[i]%2)
                ++k;
            if(k>=2){
                cout<<"NO\n";
                return 0;
            }
        }
    }
    cout<<"YES\n";
    return 0;
}
