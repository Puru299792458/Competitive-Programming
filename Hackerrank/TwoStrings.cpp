#include "../headers.hpp"

int main(){
    int t;
    cin>>t;
    while(t--){
        string s1,s2;
        cin>>s1>>s2;
        vi v1(26,0),v2(26,0);
        for(int i=0;i<s1.length();i++){
            ++v1[s1[i]-97];
        }
        for(int i=0;i<s2.length();i++){
            ++v2[s2[i]-97];
        }
        int flag=0;
        for(int i=0;i<26;i++){
            if(v1[i]!=0 && v2[i]!=0){
                flag=1;
                break;
            }
        }
        if(flag)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
