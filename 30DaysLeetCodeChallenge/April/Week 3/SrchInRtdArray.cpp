#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>

using namespace std;

typedef vector<int> vi;

int mBSearch(vector<int> v, int l, int h, int target){
    if(l>h) return -1;
    int mid = (l+h)/2;
    if (v[mid] == target) return mid;
    if(v[l]<=v[mid]){
        if(target>=v[l] && target <= v[mid]) return mBSearch(v,l,mid-1,target);
            return mBSearch(v,mid+1,h,target);
        }
    if(target>=v[mid] && target<=v[h]) return mBSearch(v,mid+1,h,target);
    return mBSearch(v,l,mid-1,target);
}


int main(){
    int n,target;
    cout<<"Enter the number of elements : ";cin>>n;cout<<"\n";
    vi v(n);
    cout<<"Enter the elements\n";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<"Enter the target : ";cin>>target;cout<<"\n";
    cout<<mBSearch(v,0,v.size()-1,target);
    return 0;
}
