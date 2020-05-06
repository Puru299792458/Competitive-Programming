#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>

using namespace std;

typedef vector<int> vi;
typedef vector<vi> vii;

void findNumbers(vi &ar,int sum,vii &res,vi &r,int i){
    if(sum<0)
        return;
    if(sum==0){
        res.push_back(r);
        return;
    }
    while(i<ar.size() && sum-ar[i]>=0){
        r.push_back(ar[i]);
        findNumbers(ar,sum-ar[i],res,r,i);
        i++;
        r.pop_back();
    }
}

vii combinatorialSum(vi &ar,int sum){
    sort(ar.begin(),ar.end());
    ar.erase(unique(ar.begin(),ar.end()),ar.end());
    vi r;
    vii res;
    findNumbers(ar,sum,res,r,0);
    return res;
}

int main(){
    int n;
    cin>>n;
    vi ar(n);
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    int sum=8;
    vii res=combinatorialSum(ar,sum);
    if(res.size()==0){
        cout<<"Empty\n";
        return 0;
    }
    for(int i=0;i<res.size();i++){
        if(res.size()>0){
            cout<<"(";
            for(int j=0;j<res[i].size();j++){
                cout<<res[i][j]<<" ";
            }cout<<")\n";
        }
    }
    return 0;
}
