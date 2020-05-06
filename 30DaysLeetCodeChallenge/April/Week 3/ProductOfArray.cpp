#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

typedef vector<int> vi;

/*
int main(){
    int n;
    cin>>n;
    vi v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int res=1;
    for(int i=0;i<n;i++){
        res *= v[i];
    }
    for(int i=0;i<n;i++){
        v[i] = res/v[i];
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }cout<<"\n";
    return 0;
}*/

//A effiecient approach without division
int main(){
    int n;
    cin>>n;
    vi v(n),res(n,1);
    if (n==1){
        cout<<0<<"\n";
        return 0;
    }
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int temp=1,i;
    for(i=0;i<n;i++){
        res[i] = temp;
        temp *= v[i];
    }
    temp =1;
    for(i=n-1;i>=0;i--){
        res[i] *= temp;
        temp *= v[i];
    }
    for(int i=0;i<n;i++){
        cout<<res[i]<<" ";
    }cout<<"\n";
    return 0;
}
