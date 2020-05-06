#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

bool isInterleaved(string c,string a,string b){
    int m=0,n=0;
    for(int i=0;i<c.length();i++){
        if(c[i]==a[m]){
            m++;
        }else if(c[i]==b[n]){
            n++;
        }else{
            return false;
        }
    }
    if (m!=a.length()|| n!=b.length()) {
        return false;
    }
    return true;
}

int main(){
    string c,a,b;
    getline(cin,c);
    getline(cin,a);
    getline(cin,b);
    if(isInterleaved(c,a,b)){
        cout<<c<<" is interleaved of "<<a<<" and "<<b<<"\n";
    }else{
        cout<<c<<" is  not interleaved of "<<a<<" and "<<b<<"\n";
    }
    return 0;
}
