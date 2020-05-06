#include <iostream>
#include <cstdlib>
#include <string>
#include <set>
#include <algorithm>

using namespace std;

typedef set<char> sc;

bool isValid(string str){
    int diff=abs(str[0]-str[1]);
    for(int i=1;i<str.length()-1;i++){
        if(diff!=abs(str[i]-str[i+1]))
            return false;
    }
    return true;
}

int main(){
    int len;
    cin>>len;
    string str,d_str="";
    cin>>str;
    sc s;
    for(int i=0;i<str.length();i++){
        s.insert(str[i]);
    }
    for(auto itr=s.begin();itr!=s.end();itr++){
        d_str+=*itr;
    }
    int max_=0;
    for(int i=0;i<d_str.length()-1;i++){
        for(int j=i+1;j<d_str.length();j++){
            string temp="";
            for(int k=0;k<str.length();k++){
                if(str[k]==d_str[i] || str[k]==d_str[j]){
                    temp+=str[k];
                }
            }
            if(isValid(temp)){
                max_=max(max_,(int)temp.length());
            }
        }
    }
    cout<<max_<<"\n";
    return 0;
}
