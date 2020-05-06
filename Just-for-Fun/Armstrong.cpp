#include "../headers.hpp"

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int res=0;
        int temp=n;
        while(temp){
            res+=pow(temp%10,3);
            temp=temp/10;
        }
        if(res==n)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
    return 0;
}
