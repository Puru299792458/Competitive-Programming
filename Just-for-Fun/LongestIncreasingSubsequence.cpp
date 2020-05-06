#include <iostream>
#include <cstdlib>

using namespace std;

int lis(int a[],int n){
    int *lis= new int(n);
    int i,j,max=0;
    for(i=0;i<n;i++)
        lis[i]=1;
    for(i=1;i<n;i++){
        for(j=0;j<i;j++){
            if(a[i]>a[j] && lis[i]<(lis[j]+1))
                lis[i]=lis[j]+1;
        }
    }
    for(i=0;i<n;i++){
        if(max<lis[i])
            max=lis[i];
    }
    delete lis;
    return max;
}

int main(){
    int a[]={10,22,9,33,21,50,41,60};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<lis(a,n)<<"\n";
    return 0;
}
