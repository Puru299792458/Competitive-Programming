#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int gcd(int a,int b){
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}

int main(){
    int a,b,c=0;
    cin>>a>>b;
    int g=gcd(a,b);
    for(int i=1;i<=sqrt(g);i++){
        if(g%i==0){
            if(g/i==i)
                c+=1;
            else
                c+=2;
        }
    }
    cout<<c<<"\n";
    return 0;
}
