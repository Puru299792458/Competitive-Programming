#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int isPrime(int n){
    int cnt=0;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            cnt+=1;
            break;
        }
    }
    if(cnt!=0)
        return 0;
    else
        return 1;
}

int main(){
    int cnt=6;
    for(int i=17;;i+=2){
        if(isPrime(i)){
            cnt+=1;
        }
        if(cnt==10001){
            cout<<i<<"\n";
            break;
        }
    }
    return 0;
}
