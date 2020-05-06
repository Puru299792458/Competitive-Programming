#include "../headers.hpp"

int main(){
    int set[]={2,4,5};
    int n=3;
    int index=0;
    for (int i=INT_BITS-1; i>=0;i--){
        int maxInd=index;
        int maxEle=INT_MIN;
        for (int j=index;j<n;j++){
            if ((set[j]&(1<<i))!=0 && set[j]>maxEle){
                maxEle = set[j];
                maxInd = j;
            }
        }
        if (maxEle==INT_MIN)
            continue;
        swap(set[index],set[maxInd]);
        maxInd=index;
        for (int j=0;j<n;j++){
            if (j!=maxInd && (set[j]&(1<<i))!=0)
                set[j]=set[j]^set[maxInd];
        }
        index++;
    }
    int res=0;
    for(int i=0;i<n;i++){
        res^=set[i];
    }
    cout<<res<<"\n";
    return 0;
}
