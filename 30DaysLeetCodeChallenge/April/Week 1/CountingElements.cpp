#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <map>
#include <cmath>

using namespace std;

typedef vector<int> vi;
typedef map<int,int> mi;

int main(){
    int n,val;
    cin>>n;
    mi hash;
    for(int i=0;i<n;i++){
        cin>>val;
        hash[val]++;
    }
    val=0;
    auto it = hash.begin();
    int tmp=it->first,tmpCnt=it->second;
    it++;
    for(;it!=hash.end();++it){
        if(it->first-tmp==1){
            val+=tmpCnt;
        }
        tmp=it->first;tmpCnt=it->second;
    }
    cout<<val<<"\n";
    return 0;
}
