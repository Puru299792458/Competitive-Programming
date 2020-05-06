#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>

using namespace std;

typedef vector<string> vs;
typedef vector<int> vi;
typedef vi::iterator itr;

int main(){
    int n,m;
    string str;
    cin>>n;
    vs v,q;
    for(int i=0;i<n;i++){
        cin>>str;
        v.push_back(str);
    }
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>str;
        q.push_back(str);
    }
    int cnt=0;
    vi t;
    for(int i=0;i<q.size();i++){
        for(int j=0;j<v.size();j++){
            if(q[i].compare(v[j])==0){
                cnt+=1;
            }
        }
        t.push_back(cnt);
        cnt=0;
    }
    itr i;
    for(i=t.begin();i!=t.end();i++){
        cout<<*i<<"\n";
    }
    return 0;
}
