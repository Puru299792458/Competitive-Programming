#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <list>

using namespace std;

typedef list<char> li;

int main(){
    string str;
    li l;
    cin>>str;
    l.push_back(str[0]);
    for(int i=1;i<str.length();i++){
        if(!l.empty() && l.back()==str[i]){
            l.pop_back();
        }else{
            if(l.empty())
                l.push_back(str[i]);
            else
                l.push_back(str[i]);
        }
    }
    if(l.empty()){
        cout<<"Empty String\n";
    }
    else{
        while(!l.empty()){
            cout<<l.front();
            l.pop_front();
        }cout<<"\n";
    }
    return 0;
}
