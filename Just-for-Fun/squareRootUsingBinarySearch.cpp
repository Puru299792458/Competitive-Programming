#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int floorSqrt(int x){
    if(x==0 || x==1)
        return x;
    int start=1,end=x,ans;
    while(start<=end){
        int mid=(start+end)/2;
        if(mid*mid==x)
            return mid;
        if(mid*mid<x){
            start=mid+1;
            ans=mid;
        }else
            end=mid-1;
    }
    return ans;
}

int main(){
    int x=11;
    double t = clock();
    cout<<floorSqrt(x)<<"\n";
    t = clock() - t;
    double time_taken = ((double)t)/CLOCKS_PER_SEC;
    cout<<"Time taken to execute the function :"<<time_taken<<"\n";
    return 0;
}
