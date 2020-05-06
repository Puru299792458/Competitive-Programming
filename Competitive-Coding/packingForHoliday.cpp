#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

int main(){
    int t,caseTest=1;
    scanf("%d",&t);
    while(t--){
        int l,w,h;
        cin>>l>>w>>h;
        if(l<=20 && w<=20 && h<=20){
            printf("Case %d: good\n",caseTest);
        }else{
            printf("Case %d: bad\n",caseTest);
        }
        ++caseTest;
    }
    return 0;
}
