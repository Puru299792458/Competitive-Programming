#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;
typedef vector<char> vi;

char nextGreatestCharacter(vi v,char k){
    int l=0,r=v.size()-1;
    while(l<r && v[r]>k){
        int mid=(l+r)/2;
        if(v[mid]>k)
            r=mid;
        else
            l=mid+1;
    }
    return v[l];
}

int main(){
    vector<char> v{'A','B','D'};
    char k='E';
    cout<<nextGreatestCharacter(v,k)<<"\n";
    return 0;
}
