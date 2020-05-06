#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int val=abs(a-b);
    if((val+1)%10==0)
        val=val-1;
    else
        val=val+1;
    cout<<val<<"\n";
    return 0;
}
