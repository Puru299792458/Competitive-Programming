#include <iostream>
#include <cstdlib>
#include <algorithm>

using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int max_=-1;
    for(int i=a;i<=b;i++){
        for(int j=a;j<=b;j++){
            max_=max(max_,i^j);
        }
    }
    cout<<max_<<"\n";
    return 0;
}
