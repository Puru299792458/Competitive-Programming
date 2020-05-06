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
    int unique_no=v[0];
    for(int i=1;i<n;i++){
        unique_no^=v[i];
    }
    cout<<unique_no<<"\n";
    return 0;
}
