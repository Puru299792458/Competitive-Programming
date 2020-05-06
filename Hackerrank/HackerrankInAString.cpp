#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>

using namespace std;

typedef vector<char> vi;

int main(){
    int t;
    string temp="hackerrank";
    cin>>t;
    while(t--){
        int k=0;
        string str;
        vi v;
        cin>>str;
        for(int i=0;i<str.length();i++){
            if(str[i]==temp[k]){
                v.push_back(str[i]);
                ++k;
            }
        }
        string result="";
        for(int i=0;i<v.size();i++){
            result+=v[i];
        }
        if(result.compare(temp)==0){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    return 0;
}
