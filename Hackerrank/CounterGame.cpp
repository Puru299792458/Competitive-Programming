#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long num;
        cin>>num;
        if(num==1){
            cout<<"Louise\n";
        }else{
            long long count=0;
            while(num!=1){
                ++count;
                if((num&(num-1))==0){
                    num=num>>1;
                }else{
                    long long val=log(num)/log(2);
                    num=num-pow(2,val);
                }
            }
            if(count%2==0){
                cout<<"Richard\n";
            }else{
                cout<<"Louise\n";
            }
        }
    }
    return 0;
}
