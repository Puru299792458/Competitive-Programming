#include <iostream>
#include <cstdlib>
#include <stack>
#include <string>

#define MAX 1000

using namespace std;

typedef stack<int> si;

int main(){
    string str;
    int chemVal[MAX],m1=0,temp=0;
    chemVal['C']=12;
    chemVal['H']=1;
    chemVal['O']=16;
    chemVal['(']=40;
    chemVal[')']=41;
    cin>>str;
    si s,s1;
    for(int i=0;i<str.length();i++){
        if(str[i]=='C' || str[i]=='O' || str[i]=='H'){
            s.push(chemVal[str[i]]);
        }else if(str[i]>='1' && str[i]<='9'){
            m1=s.top()*(str[i]-48);
            s.pop();
            s.push(m1);
            m1=0;
        }else if(str[i]=='('){
            s.push(chemVal[str[i]]);
        }else if(str[i]==')'){
            while(s.top()!=40){
                if(s.top()==12 || s.top()==1 || s.top()==16){
                    m1+=s.top();
                    s.pop();
                }else{
                    m1+=s.top();
                    s.pop();
                }
            }
            s.pop();
            s.push(m1);
            m1=0;
        }
    }
    while(!s.empty()){
        m1+=s.top();
        s.pop();
    }
    cout<<m1<<"\n";
    return 0;
}
