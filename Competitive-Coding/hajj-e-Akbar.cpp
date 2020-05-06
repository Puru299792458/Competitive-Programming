#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <string>

using namespace std;

int main(){
    int test=1;
    string s;
    while(true){
        cin>>s;
        if(s[0]=='H')
            printf("Case %d: Hajj-e-Akbar\n",test);
        else if(s[0]=='U')
            printf("Case %d: Hajj-e-Asghar\n",test);
        else if(s[0]=='*')
            break;
        ++test;
    }
    return 0;
}
