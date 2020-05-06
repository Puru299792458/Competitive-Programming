#include <cstdlib>
#include <string>
#include <iostream>

using namespace std;

int main(){
    unsigned int n=3;
    unsigned count=0;
    while(n){
        count+=(n&1);
        n>>=1;
    }
    cout<<count<<"\n";
    return 0;
}
