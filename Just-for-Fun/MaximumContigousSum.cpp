#include "../headers.hpp"

int main(){
    int n;
    cin>>n;
    vi v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int maxSum=0;
    vi m(n,0);
    if(v[0]>0)
        m[0]=v[0];
    else
        m[0]=0;
    for(int i=1;i<n;i++){
        if((m[i-1]+v[i])>0)
            m[i]=m[i-1]+v[i];
        else
            m[i]=0;
    }
    for(int i=0;i<n;i++){
        if(m[i]>maxSum)
            maxSum=m[i];
    }
    cout<<maxSum<<"\n";
    return 0;
}
