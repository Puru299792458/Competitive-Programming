#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>

using namespace std;

typedef vector<int> vi;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,m,temp;
        cin>>n>>k>>m;
        temp=n;
        vi v(m);
        for(int i=0;i<m;i++){
            cin>>v[i];
        }
        for(int i=0;i<m;i++){
            int sum=0;
            for(int j=0;j<=i;j++){
                sum+=v[j];
            }
            if(k<sum){
                cout<<i+1<<"\n";
                break;
            }
        }
    }
    return 0;
}
