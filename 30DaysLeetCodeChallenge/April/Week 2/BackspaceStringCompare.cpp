#include <iostream>
#include <cstdlib>
#include <string>
#include <deque>

using namespace std;

string removeBackSpace(string s){
    deque<char> str;
    for(int i=0;i<s.length();i++){
        if(s[i] != '#') str.push_back(s[i]);
        else if(!str.empty()) str.pop_back();
    }
    s="";
    while(!str.empty()){
        s+=str.front();
        str.pop_front();
    }
    return s;
}

int main(){
    string s,t,st="",tt="";
    cin>>s>>t;
    s = removeBackSpace(s);
    t = removeBackSpace(t);
    if(s.length()!=t.length()){
        cout<<"Not equal\n";
    }else{
        for(int i=0;i<s.length();i++){
            if(s[i]!=t[i]){
                cout<<"Not equal\n";
                return 0;
            }
        }
        cout<<"Equal\n";
    }
    return 0;
}
