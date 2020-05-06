#include <iostream>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(int i,int j){
    return i>j;
}

int isPalendrome(int n){
    int temp=n,rev=0;
    while(temp){
        rev=(rev*10)+(temp%10);
        temp/=10;
    }
    if(rev==n)
        return 1;
    else
        return 0;
}

int main(){
    vector<int> v;
    for(int i=999;i>=100;i--){
        for(int j=i;j>=100;j--){
            if(isPalendrome(i*j)){
                v.push_back(i*j);
            }
        }
    }
    sort(v.begin(),v.end(),compare);
    cout<<v[0];
    return 0;
}
