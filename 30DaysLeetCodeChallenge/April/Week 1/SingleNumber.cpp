#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

int main(){
    vector<int> vi;
    int n,val;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>val;
        vi.push_back(val);
    }
    int res=0;
    for(int i=0;i<vi.size();i++){
        res ^= vi[i];
    }
    cout<<res<<"\n";
    return 0;
}
