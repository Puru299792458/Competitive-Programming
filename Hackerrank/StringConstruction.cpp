#include "../headers.hpp"

int main(){
    int n;
    cin>>n;
    string strArray[n];
    for(int i=0;i<n;i++){
        cin>>strArray[i];
    }
    for(int k=0;k<n;k++){
        int cost=0;
        vi v1(26,0);
        for(int i=0;i<strArray[k].length();i++){
            if(v1[strArray[k][i]-97]==0){
                v1[strArray[k][i]-97]+=1;
                cost+=1;
            }
        }
        cout<<cost<<"\n";
    }
    return 0;
}
