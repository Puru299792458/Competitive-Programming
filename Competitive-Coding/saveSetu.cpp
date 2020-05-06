#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <string>
#include <sstream>

using namespace std;

int main(){
    int t,totalAmt=0;
    cin>>t>>ws;
    while(t--){
        string str;
        getline(cin,str);
        if(str[0]=='r'){
            printf("%d\n",totalAmt);
        }else{
            stringstream ss(str);
            string str;
            int x;
            ss>>str>>x;
            totalAmt+=x;
        }
    }
    return 0;
}
