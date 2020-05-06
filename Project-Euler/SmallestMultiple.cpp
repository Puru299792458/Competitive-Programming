#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

typedef long long ll;

int main(){
    int p[9]={2,3,5,7,11,13,17,19,23};
    int a[9]={1,1,1,1,1,1,1,1,1};
    int n=1,i=0,k=20,flag=1;
    int limit=sqrt(k);
    while(p[i]<=k){
        if(flag){
            if(p[i]<=limit)
                a[i]=floor(log(k)/log(p[i]));
            else
                flag=0;
        }
        cout<<i<<"="<<p[i]<<" "<<a[i]<<"=";
        n=n*pow(p[i],a[i]);
        cout<<n<<"\n";
        i+=1;
    }
    cout<<n<<"\n";
    return 0;
}
