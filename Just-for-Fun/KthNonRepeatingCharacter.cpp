#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

typedef vector<int> vi;

const int MAX_CHAR=256;

int main(){
    string s;
    cin>>s;
    int k;
    cin>>k;
    vi count(MAX_CHAR,0);
    vi index(MAX_CHAR,s.length());
    for(int i=0;i<s.length();i++){
        char x=s[i];
        ++count[x];
        if(count[x]==1){
            index[x]=i;
        }
        if(count[x]==2){
            index[x]=s.length();
        }
    }
    sort(index.begin(),index.end());
    if(index[k-1]!=n){
        cout<<s[index[k-1]];
    }else{
        cout<<-1<<"\n";
    }
    return 0;
}
