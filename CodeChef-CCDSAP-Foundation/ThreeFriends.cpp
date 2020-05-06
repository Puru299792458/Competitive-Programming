#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        if((x+y-z==0)||(x+z-y==0)||(y+z-x==0))
            cout<<"yes\n";
        else
            cout<<"no\n";
    }
	return 0;
}
