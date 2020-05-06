#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    int val;
    while(true){
        cin>>val;
        if(val==42){
            break;
        }else{
            cout<<val<<"\n";
        }
    }
}
