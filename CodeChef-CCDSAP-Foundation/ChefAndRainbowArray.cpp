#include <iostream>
#include <cstdlib>
#include <algorithm>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,flag=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            if(a[i]!=a[n-i-1]){
                flag=1;
                break;
            }
        }
        if(flag==0){
            int k=1;
            int b[7]={0};
            while(k<=7){
                for(int i=0;i<n;i++){
                    if(a[i]==k)
                        b[k-1]++;
                }
                k+=1;
            }
            for(int i=0;i<7;i++){
                if(b[i]==0){
                    flag++;
                    break;
                }
            }
            if(flag==0)
                cout<<"yes"<<"\n";
            else
                cout<<"no"<<'\n';
        }else{
            cout<<"no\n";
        }
    }
    return 0;
}
