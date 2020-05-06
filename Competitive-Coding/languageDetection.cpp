#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <string>

using namespace std;

int main(){
    string str;
    int testCase=1;
    while(true){
        cin>>str;
        if(str.compare("HELLO")==0){
            printf("Case %d: ENGLISH\n",testCase);
        }else if(str.compare("HOLA")==0){
            printf("Case %d: SPANISH\n",testCase);
        }else if(str.compare("HALLO")==0){
            printf("Case %d: GERMAN\n",testCase);
        }else if(str.compare("BONJOUR")==0){
            printf("Case %d: FRENCH\n",testCase);
        }else if(str.compare("CIAO")==0){
            printf("Case %d: ITALIAN\n",testCase);
        }else if(str.compare("ZDRAVSTVUJTE")==0){
            printf("Case %d: RUSSIAN\n",testCase);
        }else if(str[0]=='#'){
            break;
        }else{
            printf("Case %d: UNKNOWN\n",testCase);
        }
        ++testCase;
    }
    return 0;
}
