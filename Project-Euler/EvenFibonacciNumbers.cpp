#include <iostream>
#include <cstdlib>

using namespace std;
typedef long long ll;
const int MAX =4000000;
int main(){
    int i,sum=0;
    long long a[1000000];
    a[0]=1;
    a[1]=2;
    for(i=2;;i++){
        if(a[i-1]+a[i-2]<=MAX){
            a[i]=a[i-1]+a[i-2];
        }else{
            break;
        }
    }
    for(int j=0;j<=i;j++){
        if(a[j]%2==0){
            sum+=a[j];
        }
    }
    cout<<sum<<"\n";
    return 0;
}
