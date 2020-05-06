#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <cstdio>
#include <vector>

using namespace std;

typedef vector<int> vi;

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        vi v(n);
        for(int i=0;i<n;i++){
            scanf("%d",&v[i]);
        }
        sort(v.begin(),v.end());
        printf("%d\n",2*(v[v.size()-1]-v[0]));
    }
    return 0;
}
