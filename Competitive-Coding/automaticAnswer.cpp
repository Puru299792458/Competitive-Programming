#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>

using namespace std;

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int result=((((((n*567)/9)+7492)*235)/47)-498);
        printf("%d\n",abs((result%100)/10));
    }
    return 0;
}
