#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

typedef vector<int> vi;

int interPolate(vi v,int val){
    int low=0,mid,high=v.size()-1;
    while(low<=high){
        mid=low+((val-v[low])*(high-low))/(v[high]-v[low]);
        if(val==v[mid]){
            return mid+1;
        }else if(v[mid]>val){
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    vi v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int val;
    cout<<"Enter the element to be searched\n";
    cin>>val;
    int result=interPolate(v,val);
    if(result==-1){
        cout<<"Element is not present\n";
    }else{
        cout<<"Element is present at "<<result<<"\n";
    }
    return 0;
}
