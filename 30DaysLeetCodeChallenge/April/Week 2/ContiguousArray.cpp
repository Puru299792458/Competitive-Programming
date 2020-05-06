#include <iostream>
#include <cstdlib>
#include <vector>
#include <unordered_map>

using namespace std;

typedef vector<int> vi;
typedef unordered_map<int,int> ui;

int main(){
    int n,sum=0,maxLen=0,endInd=-1;
    cin>>n;
    vi v(n);
    ui hashMap;
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        v[i] = (v[i]==0)?-1:1;
    }
    for(int i=0;i<n;i++){
        sum += v[i];
        if (sum==0){
            maxLen = i+1;
            endInd=i;
        }
        if(hashMap.find(sum+n)!=hashMap.end()){
            if(maxLen < i-hashMap[sum+n]){
                maxLen = i-hashMap[sum+n];
                endInd=i;
            }
        }else{
            hashMap[sum+n] = i;
        }
    }
    for(int i=0;i<n;i++){
        v[i] = (v[i]==-1)?0:1;
    }
    cout<<maxLen<<"\n";
    return 0;
}
