//
#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <cmath>

using namespace std;



int main(){
    int t;
    cin>>t;
    while(t--){
        int p,menu=0;
        cin>>p;
        for(int i=11;i>=0;i--){
            menu=menu+(p/pow(2,i));
            p=p%(int(pow(2,i)));
        }
        cout<<menu<<"\n";
    }
    return 0;
}
