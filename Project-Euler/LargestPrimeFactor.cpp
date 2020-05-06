#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

typedef long long ll;

int main(){
    int lastFactor,factor;
    ll n=600851475143;
    if(n%2==0){
        lastFactor=2;
        n=n/2;
        while(n%2==0)
            n=n/2;
    }else
        lastFactor=1;
    factor=3;
    int maxFactor=sqrt(n);
    while(n>1 && factor<=maxFactor){
        if(n%factor==0){
            n=n/factor;
            lastFactor=factor;
            while(n%factor==0)
                n=n/factor;
            maxFactor=sqrt(n);
        }
        factor=factor+2;
    }
    if(n==1){
        cout<<lastFactor<<"\n";
    }else{
        cout<<n<<"\n";
    }
}
