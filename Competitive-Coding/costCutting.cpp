#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

typedef vector<int> vi;

int main(){
    int t,caseTest=1;;
    scanf("%d",&t);
    while(t--){
        vi v(3);
        for(int i=0;i<3;i++){
            scanf("%d",&v[i]);
        }
        sort(v.begin(),v.end());
        printf("Case %d: %d\n",caseTest,v[1]);
        ++caseTest;
        
    }
    return 0;
}
