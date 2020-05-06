#include <iostream>
#include <cstdlib>
#include <cstdio>

typedef long int li;

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        li a,b;
        scanf("%ld%ld",&a,&b);
        if(a>b)
            printf(">\n");
        else if(a<b)
            printf("<\n");
        else
            printf("=\n");
    }
    return 0;
}
