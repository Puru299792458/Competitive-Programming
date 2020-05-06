#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstdbool>
#include <vector>

using namespace std;

typedef vector<int> vi;

int main(){
    int n,caseNumber=1;
    while(scanf("%d",&n),n){
        vi v(n);
        for(int i=0;i<n;i++){
            scanf("%d",&v[i]); 
        }
        int sum=0;
        for(int i=0;i<n;i++){
            if(v[i]>0)
                ++sum;
            else
                --sum;
        }
        printf("Case %d: %d\n",caseNumber,sum);
        ++caseNumber;
    }
    return 0;
}
