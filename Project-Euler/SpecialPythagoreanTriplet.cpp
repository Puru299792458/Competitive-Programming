#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int pythaVal(int a,int b,int c){
    return ((a*a)+(b*b)-(c*c));
}

int main(){
    int a,b,c,ans;
    for(int i=999;i>0;i--){
        for(int j=999;j>0;j--){
            ans=(i*i)+(j*j);
            ans=sqrt(ans);
            if(pythaVal(i,j,ans)==0 && i+j+ans==1000){
                cout<<i<<" "<<j<<" "<<ans<<" : i*j*ans = "<<i*j*ans<<"\n";
                exit(0);
            }
        }
    }
}
