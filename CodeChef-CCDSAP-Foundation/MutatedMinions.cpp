#include <iostream>
#include <cstdlib>
#include <algorithm>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,c=0;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            a[i]+=k;
            if(a[i]%7==0){
                c+=1;
            }
        }
        cout<<c<<"\n";
    }
    return 0;
}
