#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

typedef vector<int> vi;
typedef vector<vi> vii;

void subsetUtil(vi &a,vii &res,vi &subset,int index){
    for(int i=index;i<a.size();i++){
        subset.push_back(a[i]);
        res.push_back(subset);
        subsetUtil(a,res,subset,i+1);
        subset.pop_back();
    }
    return ;
}

vii subSets(vi &a){
    vi subset;
    vii res;
    res.push_back(subset);
    int index=0;
    subsetUtil(a,res,subset,index);
    return res;
}

int main(){
    vi a(4);
    for(int i=0;i<a.size();i++){
        a[i]=i+1;
    }
    vii res=subSets(a);
    for(int i=0;i<res.size();i++){
        for(int j=0;j<res[i].size();j++){
            cout<<res[i][j]<<" ";
        }cout<<"\n";
    }
    return 0;
}
