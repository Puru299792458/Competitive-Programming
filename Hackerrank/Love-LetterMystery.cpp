#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

bool isPalendrome(string str){
    int n=str.length();
    for(int i=0;i<n/2;i++){
        if(str[i]!=str[n-i-1])
            return false;
    }
    return true;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        if(isPalendrome(str)){
            cout<<0<<"\n";
        }else{
            int count=0;
            int n=str.length();
            for(int i=0;i<n/2;i++){
                if(str[i]!=str[n-1-i]){
                    count+=abs(str[n-1-i]-str[i]);
                }
            }
            cout<<count<<"\n";
        }
    }
}
