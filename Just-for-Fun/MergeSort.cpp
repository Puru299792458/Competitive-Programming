#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

typedef vector<int> vi;

void mergeA(vi a,vi temp,int left,int mid,int right){
    int i,left_end,size,temp_pos;
    left_end=mid-1;
    temp_pos=left;
    size=right-left+1;
    while(left<=left_end && mid<=right){
        if(a[left]<=a[right]){
            temp[temp_pos]=a[left];
            temp_pos+=1;
            left+=1;
        }else{
            temp[temp_pos]=a[mid];
            temp_pos+=1;
            mid+=1;
        }
    }
    while(left<=left_end){
        temp[temp_pos]=a[left];
        left+=1;
        temp_pos+=1;
    }
    while(mid<=right){
        temp[temp_pos]=a[mid];
        temp_pos+=1;
        mid+=1;
    }
    for(i=0;i<=size;i++){
        a[right]=temp[right];
        right-=1;
    }
}

void mergeSort(vi v,vi temp,int left,int right){
    int mid;
    if(right>left){
        mid=(left+right)/2;
        mergeSort(v,temp,left,mid);
        mergeSort(v,temp,mid+1,right);
        mergeA(v,temp,left,mid+1,right);
    }
}

int main(){
    vi v(10);
    cout<<"Before Sorting\n";
    for(int i=9;i>=0;i--){
        v[i]=i;
        cout<<i<<" ";
    }
    vi temp(10);
    mergeSort(v,temp,0,v.size()-1);
    cout<<"\nAfter Sorting\n";
    for(int i=0;i<10;i++){
        cout<<v[i]<<" ";
    }cout<<"\n";
    return 0;
}
