#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main(){
    string s;
    cin>>s;
    int l=0,h=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='('){
            l++;h++;
        }else if(s[i]==')'){
            if(l>0) l--;
            h--;
        }else{
            if(l>0) l--;
            h++;
        }
        if(h<0)cout<<false<<"\n";
    }
    cout<<(l==0)<<"\n";
    return 0;
}
