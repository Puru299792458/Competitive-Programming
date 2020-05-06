#include <cstdlib>
#include <string>
#include <iostream>

using namespace std;

int main(){
    unsigned int n=3;
    unsigned int rev=n;
    int size=sizeof(n)*8-1;
    for(;n;n>>=1){
        rev<<=1;
        rev|=n&1;
        size--;
    }
    rev<<=size;
    cout<<rev<<"\n";
}
