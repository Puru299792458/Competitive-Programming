#include <cstdlib>
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

void permute(string str,int l,int r){
    int i;
    if(l==r){
        cout<<str<<"\n";
    }else{
        for(i=l;i<=r;i++){
            swap(str[0],str[i]);
            permute(str,l+1,r);
            swap(str[0],str[i]);
        }
    }
}

int main(){
    string str;
    cin>>str;
    permute(str,0,str.length()-1);
}
