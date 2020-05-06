#include "../headers.hpp"

int main(){
    int a[]={1,2,3};
    int size=3,i,j;
    unsigned int pow_size=pow(2,3);
    //Power Set=2^3
    for(i=0;i<pow_size;i++){
        for(j=0;j<size;j++){
            if(i&(1<<j))
                cout<<a[j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
