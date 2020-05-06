#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>

using namespace std;

typedef vector<int> vi;

int main(){
    int n;
    cin>>n;
    string str;
    cin>>str;
    if(str.length()<6){
        cout<<"Insdide\n";
        vi v(4,0);
        for(int i=0;i<n;i++){
            if(str[i]>='0' && str[i]<='9'){
                ++v[0];
            }else if(str[i]>='a' && str[i]<='z'){
                ++v[1];
            }else if(str[i]>='A' && str[i]<='Z'){
                cout<<str[i]<<"\n";
                ++v[2];
            }else{
                ++v[3];
            }
        }
        int cnt=0;
        for(int i=0;i<v.size();i++){
            if(v[i]==0){
                ++cnt;
            }
        }
        if(cnt>(6-n)){
            cout<<cnt<<"\n";
        }else{
            cout<<(6-n)<<"\n";
        }
    }else{
        vi v(4,0);
        for(int i=0;i<str.length();i++){
            if(str[i]>='0' && str[i]<='9'){
                ++v[0];
            }else if(str[i]>='a' && str[i]<='z'){
                ++v[1];
            }else if(str[i]>'A' && str[i]<='Z'){
                ++v[2];
            }else{
                ++v[3];
            }
        }
        int cnt=0;
        for(int i=0;i<v.size();i++){
            if(v[i]==0){
                ++cnt;
            }
        }
        cout<<cnt<<"\n";
    }
    return 0;
}
