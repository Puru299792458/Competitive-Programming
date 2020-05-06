#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<vs> vss;

/*
bool chkAngm(string s1,string s2){
    int i;
    vi cnt(256,0);
    for(i=0; i< s1[i]&&s2[i]; i++){
        cnt[s1[i]]++;
        cnt[s2[i]]--;
    }
    if (s1[i]||s2[i]){
        return false;
    }
    for(i=0; i<cnt.size(); i++){
        if(cnt[i]==1) return false;
    }
    return true;
}

int main(){
    int n;
    cin>>n;
    vs input(n);
    vs temp;
    vss result;
    for(int i=0; i<n; i++) cin>>input[i];
    for(int i=0;i<n;i++){
        if (input[i] != ""){
            temp.push_back(input[i]);
            for(int j=i+1; j<n;j++){
                if (chkAngm(input[i],input[j])){
                    temp.push_back(input[j]);
                    input[j]="";
                }
            }
            input[i]="";
            result.push_back(temp);
            temp.clear();
        }
    }
    for (int i=0;i<result.size();i++){
        for(int j=0;j<result[i].size();j++){
            cout<<result[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
*/

//better efficiency
int main(){
    int n;
    cin>>n;
    vs input(n);
    vss result;
    for(int i=0;i<n;i++) cin>>input[i];
    map<string,vector<string> > dict;
    for(string s: input){
        string sorted = s;
        sort(sorted.begin(),sorted.end());
        dict[sorted].push_back(s);
    }
    map<string,vector<string> >:: iterator it=dict.begin();
    while (it!=dict.end()){
        result.push_back(it->second);
        it++;
    }
    for(int i=0;i<result.size();i++){
        for(int j=0;j<result[i].size();j++){
            cout<<result[i][j]<<" ";
        }cout<<"\n";
    }
    return 0;
}
