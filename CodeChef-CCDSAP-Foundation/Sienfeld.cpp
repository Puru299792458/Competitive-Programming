#include <iostream>
#include <cstdlib>
#include <string>
#include <stack>

using namespace std;

typedef stack<char> si;

int main(){
    bool game=true;
    int k=0;
    while(game){
        string str;
        si s;
        char c;
        int openc=0,closec=0;
        getline(cin,str);
        int num=0;
        if(str[0]=='-'){
            game=false;
        }else{
            if(!str.empty()){
                for(int i=0;i<str.length();i++){
                    if(str[i]=='{'){
                        //cout<<i<<"push{ = "<<str[i]<<"\n";
                        s.push(str[i]);
                    }else if(str[i]=='}'){
                        if(!s.empty()){
                            if(s.top()=='{'){
                                //cout<<i<<" pop}= "<<str[i]<<"\n";
                                s.pop();
                            }else{
                                //cout<<i<<"push} = "<<str[i]<<"\n";
                                s.push(str[i]);
                            }
                        }else{
                            //cout<<i<<" = "<<str[i]<<"\n";
                            s.push(str[i]);
                        }
                    }
                }
                while(!s.empty()){
                    if(s.top()=='{'){
                        openc+=1;
                        c=s.top();
                        s.pop();
                        if(s.top()=='}'){
                            num+=2;
                            openc-=1;
                            s.pop();
                        }else{
                            openc+=1;
                            s.pop();
                        }
                    }else{//}
                        closec+=1;
                        c=s.top();
                        s.pop();
                        if(s.top()=='{'){
                            num+=2;
                            closec-=1;
                            s.pop();
                        }else{
                            closec+=1;
                            s.pop();
                        }
                    }
                }
                num+=(openc/2)+(closec/2);
            }
            ++k;
            cout<<k<<". "<<num<<"\n";
        }
        num=0;
    }
    return 0;
}
