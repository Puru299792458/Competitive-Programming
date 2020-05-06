#include <iostream>
#include <cstdlib>
#include <string>
#include <stack>

using namespace std;

typedef stack<char> si;

int main(){
    int t;
    cin>>t;
    while(t--){
        si s;
        int k=-1;
        string str;
        cin>>str;
        char result[str.length()];
        for(int i=0;i<str.length();i++){
            if(str[i]=='('){
                s.push(str[i]);
            }else if(str[i]>='a' && str[i]<='z'){
                result[++k]=str[i];
            }else if(str[i]==')'){
                while(s.top()!='('){
                    result[++k]=s.top();
                    s.pop();
                }
                s.pop();
            }else{
                s.push(str[i]);
            }
        }
        while(!s.empty()){
            if(s.top()=='(')
                s.pop();
            else{
                result[++k]=s.top();
                s.pop();
            }
        }
        for(int i=0;i<=k;i++){
            cout<<result[i];
        }cout<<"\n";
    }
    return 0;
}
