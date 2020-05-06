#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <cctype>

using namespace std;

typedef vector<int> vi;

int main(){
    string str;
    getline(cin,str);
    vi v(27,0);
    for(int i=0;i<str.length();i++){
        if(str[i]!=' '){
            if(isupper(str[i])){
                v[str[i]-65]=1;
            }else{
                v[str[i]-97]=1;
            }
        }
    }
    int flag=0;
    for(int i=0;i<26;i++){
        if(v[i]==0){
            cout<<"not pangram\n";
            return 0;
        }
    }
    cout<<"pangram\n";
    return 0;
}
