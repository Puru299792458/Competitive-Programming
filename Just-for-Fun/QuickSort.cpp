#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>

using namespace std;

typedef vector<int> vi;

int partition(vi v,int low,int high){
    int left,right,pivot_ele=v[low];
    left=low;
    right=high;
    while(left<right){
        while(v[left]<=pivot_ele){
            left++;
        }
        while(v[right]>pivot_ele){
            right--;
        }
        if(left<right){
            swap(v[left],v[right]);
        }
    }
    v[low]=v[right];
    v[right]=pivot_ele;
    return right;
}

void quickSort(vi v,int low,int high){
    int pivot;
    if(high>low){
        pivot=partition(v,low,high);
        quickSort(v,low,pivot-1);
        quickSort(v,pivot+1,high);
    }
}

int main(){
    vi v(6);
    cout<<"Before Sorting\n";
    for(int i=5;i>=0;i--){
        v[i]=i+1;
        cout<<i+1<<" ";
    }
    cout<<"\n";
    quickSort(v,0,v.size());
    cout<<"\nAfter Sorting\n";
    for(int i=0;i<6;i++){
        cout<<v[i]<<" ";
    }cout<<"\n";
    return 0;
}
