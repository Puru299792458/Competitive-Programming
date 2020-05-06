#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main(){
    string str;
    cin>>str;
    int hash[27]={0};
    for(int i=0;i<str.length();i++){
        ++hash[str[i]-97];
    }
    int k=0;
    for(int i=0;i<27;i++){
        if(hash[i]!=0){
            if(hash[i]%2)
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
