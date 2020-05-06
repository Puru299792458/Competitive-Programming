#include <iostream>
#include <climits>
#include <vector>

using namespace std;

typedef vector<int> vi;

int maxSumContiguosArray(vi v){
    int maxSoFar=INT_MIN,maxEndingHere=0;
    for(int i=0;i<v.size();i++){
        maxEndingHere+=v[i];
        if(maxSoFar<maxEndingHere)
            maxSoFar=maxEndingHere;
        if(maxEndingHere<0)
            maxEndingHere=0;
    }
    return maxSoFar;
}

int main(){
    int n;
    cin>>n;
    vi v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<maxSumContiguosArray(v)<<"\n";
    return 0;
}
