#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>

using namespace std;

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,m;
        scanf("%d%d",&n,&m);
        printf("%d\n",(n/3)*(m/3));
    }
    return 0;
}
