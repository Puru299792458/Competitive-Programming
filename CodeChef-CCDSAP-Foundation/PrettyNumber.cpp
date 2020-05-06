#include <iostream>
#include <cstdlib>

using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;
        int cnt=0;
        for(long long i=a;i<=b;i++){
            if(i%10==2 || i%10==3 || i%10==9){
                ++cnt;
            }
        }
        cout<<cnt<<"\n";
    }
    return 0;
}
