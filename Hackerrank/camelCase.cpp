#include <iostream>
#include <cstdlib>
#include <string>
#include <cctype>

using namespace std;

int main(){
    string str;
    int cnt=0;
    getline(cin,str);
    if(str.empty()){
        cout<<0<<"\n";
        return 0;
    }else{
        cnt++;
        for(int i=1;i<str.length();i++){
            if(isupper(str[i])){
                ++cnt;
            }
        }
        cout<<cnt<<"\n";
    }
    return 0;
}
