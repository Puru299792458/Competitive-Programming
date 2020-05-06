#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main(){
    int n;
    cin>>n;
    string str;
    cin>>str;
    int count=0;
    for(int i=0,j=3;i<str.length();i++){
        if(str.substr(i,j)=="010"){
            i+=2;
            count++;
        }
    }
    cout<<count<<"\n";
    return 0;
}
