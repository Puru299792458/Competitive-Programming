#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string str[n],boolstr[n];
        for(int i=0;i<n;i++){
            cin>>str[i];
        }
        for(int i=0;i<n;i++){
            boolstr[i]="NO";
        }
        for(int i=0;i<k;i++){
            int l;
            cin>>l;
            string str2[l];
            for(int j=0;j<l;j++){
                cin>>str2[j];
            }
            for(int j=0;j<l;j++){
                for(int k=0;k<n;k++){
                    if(str[k]==str2[j]){
                        boolstr[k]="YES";
                        break;
                    }
                }
            }
        }
        for(int i=0;i<n;i++){
            cout<<boolstr[i]<<" ";
        }cout<<"\n";
    }
    return 0;
}
