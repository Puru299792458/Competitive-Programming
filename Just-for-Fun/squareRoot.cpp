#include <iostream>
#include <cstdlib>

using namespace std;

int floorSqrt(int x){
    if(x==0||x==1)
        return x;
    int i=1,result=1;
    while(result<=x){
        i++;
        result=i*i;
    }
    return i-1;
}

int main(){
    int x=11;
    cout<<floorSqrt(x)<<"\n";
    return 0;
}
