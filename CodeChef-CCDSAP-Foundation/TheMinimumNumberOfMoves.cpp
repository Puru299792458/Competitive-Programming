#include <iostream>
#include <cstdlib>
#include <algorithm>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        int min_moves=a[n-1]-a[0];
        int temp=min_moves;
        while(true){
            if(temp!=0){
                for(int i=0;i<n-1;i++){
                    a[i]+=temp;
                }
                sort(a,a+n);
                temp=a[n-1]-a[0];
                min_moves=min_moves+(a[n-1]-a[0]);
            }else{
                break;
            }
        }
        cout<<min_moves<<"\n";
    }
    return 0;
}
