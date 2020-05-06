#include <iostream>
#include <cstdlib>
#include <vector>
#include <unordered_map>

using namespace std;

typedef vector<int> vi;
typedef unordered_map<int,int> umi;

int main(){
    int n,sum,curSum=0,temp=0;
    cout<<"Enter the sum \n";
    cin>>sum;
    cout<<"Enter the number of elements\n";
    cin>>n;
    vi v(n);
    umi m;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        curSum+=v[i];
        if(curSum == sum) temp++;
        if(m.find(curSum-sum)!= m.end()) temp += m[curSum-sum];
        m[curSum]++;
    }
    cout<<temp<<"\n";
    return 0;
}
