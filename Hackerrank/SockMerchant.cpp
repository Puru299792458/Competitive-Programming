#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

typedef vector<int> vi;

int main(){
    int n;
    cin>>n;
    vi v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int hash[101]={0};
    for(int i=0;i<n;i++){
        ++hash[v[i]];
    }
    int count=0;
    for(int i=0;i<101;i++){
        if(hash[i]!=0)
            count+=hash[i]/2;
    }
    cout<<count<<"\n";
    return 0;
}
