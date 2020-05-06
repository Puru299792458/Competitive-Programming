#include <iostream>
#include <cstdlib>
#include <string>
#include <cctype>

using namespace std;
/*
int main(){
    string str;
    int sum=0;
    cin>>str;
    for(int i=0;i<str.length();i++){
        for(int j=1;j<=str.length()-i;j++){
            cout<<str.substr(i,j)<<"\n";
            sum+=stoi(str.substr(i,j));
        }
    }
    cout<<sum<<"\n";
    return 0;
}
*/

//Alternative solution using Dynamic Programmming

int main(){
    string str;
    cin>>str;
    int sum[str.length()];
    sum[0]=str[0]-'0';
    //cout<<sum[0]<<"\n";
    int res=sum[0];
    for(int i=1;i<str.length();i++){
        int numi=str[i]-'0';
        sum[i]=(i+1)*(numi)+(10*sum[i-1]);
        res+=sum[i];
    }
    cout<<res<<"\n";
    return 0;
}
