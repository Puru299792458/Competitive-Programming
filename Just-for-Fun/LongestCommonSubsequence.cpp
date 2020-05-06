#include "../headers.hpp"

int main(){
    string s1,s2;
    cin>>s1>>s2;
    int m=s1.length();
    int n=s2.length();
    vii v(1024,vi(1024));
    for(int i=0;i<=m;i++){
        v[i][n]=0;
    }
    for(int j=0;j<=n;j++){
        v[m][j]=0;
    }
    for(int i=m-1;i>=0;i--){
        for(int j=n-1;j>=0;j--){
            v[i][j]=v[i+1][j+1];
            if(s1[i]==s2[j]){
                ++v[i][j];
            }
            if(v[i+1][j]>v[i][j])
                v[i][j]=v[i+1][j];
            if(v[i][j+1]>v[i][j])
                v[i][j]=v[i][j+1];
        }
    }
    int i=0;
    int j=0;
    string str="";
    while(i<m && j<n){
        if(s1[i]==s2[j]){
            str+=s1[i];
            i++;
            j++;
        }else if(v[i+1][j]>v[i][j+1]){
            i++;
        }else{
            j++;
        }
    }
    cout<<str<<"\n";
    cout<<v[0][0]<<"\n";
    return 0;
}
