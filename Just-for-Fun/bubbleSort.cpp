#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>

using  namespace std;

typedef vector<int> vi;

void bubbleSort(vi &v){
    for(int pass=v.size()-1;pass>=0;pass--){
        for(int i=0;i<=pass;i++){
            if(v[i]>v[i+1])
                swap(v[i],v[i+1]);
        }
    }
}

int main(){
    int n;
    cout<<"Enter the number of Elements :";
    cin>>n;
    vi v(n);
    cout<<"Enter the elements\n";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    bubbleSort(v);
    for(auto i=1;i<=v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
