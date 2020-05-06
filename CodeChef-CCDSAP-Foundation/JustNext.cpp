#include <iostream>
using namespace std;

void swap(int *a,int *b){
	if( *a == *b )
		return;
	*a^=*b;
	*b^=*a;
	*a^=*b;
}

void rev(int a[],int l,int r){
	while(l<r)
		swap(&a[l++],&a[r--]);
}

int bSearch (int a[],int l,int r,int key){
	int idx = -1;
	while(l<=r){
		int mid = l+(r-l)/2;
		if(a[mid]<=key)
			r=mid-1;
		else{
			l=mid+1;
			if(idx = -1 || a[idx]<=a[mid])
				idx = mid;
		}
	}
    return idx;
}

bool nextPermutation(int a[],int n){
	int len=n, i=len-2;
	while(i>=0 && a[i]>=a[i+1])
        --i;
	if(i<0)
		return false;
	else{
		int index=bSearch(a,i+1,len-1,a[i]);
		swap(&a[i],&a[index]);
		rev(a,i+1,len-1);
		return true;
	}
}

int main (){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        bool val=nextPermutation(a,n);
        if(val==false)
            cout<<-1<<"\n";
        else{
            for(int i=0;i<n;i++){
                cout<<a[i];
            }cout<<"\n";
        }
    }
	return 0;
}
