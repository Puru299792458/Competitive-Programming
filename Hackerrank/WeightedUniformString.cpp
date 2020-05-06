#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>

using namespace std;

typedef vector <bool> vb;

int main(){
    string str;
    cin>>str;
    int n;
    cin>>n;
    vb v(10e7);
    for(int i=0;i<str.length();i++){
        int sum=0;
        for(int j=0;j<str.length(),str[i]==str[i+j];j++){
            sum+=str[i+j]-96;
        }
        v[sum]=true;
    }
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(v[x])
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
    return 0;
}
