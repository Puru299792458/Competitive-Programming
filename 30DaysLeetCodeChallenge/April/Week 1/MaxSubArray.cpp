#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

typedef vector<int> vi;

int main(){
    vi v;
    int n,val;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>val;
        v.push_back(val);
    }
    int sum=v[0],temp=v[0];
    for(int i=1;i<v.size();i++){
        temp = max(v[i],temp+v[i]);
        sum = max(sum,temp);
    }
    cout<<sum<<"\n";
    return 0;
}
