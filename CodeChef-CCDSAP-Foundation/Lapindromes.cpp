#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int flag=0;
        string str;
        cin>>str;
        int a[26],b[26];
        for(int i=0;i<26;i++){
            a[i]=0;
            b[i]=0;
        }
        if(str.size()%2==0){
            for(int i=0;i<str.size()/2;i++){
                a[str[i]-97]++;
            }
            for(int i=str.size()/2;i<str.size();i++){
                b[str[i]-97]++;
            }
            for(int i=0;i<str.size()/2;i++){
                if(a[str[i]-97]!=b[str[i]-97]){
                    flag=1;
                    break;
                }
            }
            if(flag==0)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }else{
            for(int i=0;i<str.size()/2;i++){
                a[str[i]-97]++;
            }
            for(int i=str.size()/2+1;i<str.size();i++){
                b[str[i]-97]++;
            }
            for(int i=0;i<str.size()/2;i++){
                if(a[str[i]-97]!=b[str[i]-97]){
                    flag=1;
                    break;
                }
            }
            if(flag==0)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
    }
    return 0;
}
