#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>

using namespace std;

typedef vector<int> vi;
typedef vector<vi> vii;

int main(){
    string s;
    cout<<"Enter the string\n";
    cin>>s;
    int n,tlc=0;
    cout<<"Enter the number of actions\n";
    cin>>n;
    vii v(n,vi(2));
    for(int i=0; i<n; i++){
        for(int j=0; j<2; j++){
            cin>>v[i][j];
        }
    }
    for(int i=0;i<v.size();i++){
        tlc += (v[i][0]==0)?-v[i][1]:v[i][1];
    }
    int sLen = s.length();
    tlc = tlc%sLen;
    string res="";
    if(tlc>0){
        //RR
        cout<<s.substr(s.length()-tlc,tlc)<<"\n";
        res = s.substr(s.length()-tlc,tlc)+s.substr(0,s.length()-tlc);
    }else{
        //LR
        res = s.substr(-tlc,s.length()+tlc)+s.substr(0,-tlc);
    }
    cout<<res<<"\n";
    return 0;
}
