#include "../headers.hpp"



int main(){
    string s1;
    string s2;
    cin>>s1;
    cin>>s2;
    vi v1(26,0);
    vi v2(26,0);
    for(int i=0;i<s1.length();i++){
        ++v1[s1[i]-97];
    }
    for(int i=0;i<s2.length();i++){
        ++v2[s2[i]-97];
    }
    int count=0;
    for(int i=0;i<26;i++){
        if(v1[i]!=0 || v2[i]!=0){
            count+=abs(v1[i]-v2[i]);
        }
    }
    cout<<count<<"\n";
    return 0;
}
