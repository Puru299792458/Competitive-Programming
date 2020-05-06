#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

typedef vector<int> vi;
typedef vector<vi> vii;

void printSpiralForm(vii v,int n){
    int rowStart=0,columnStart=0;
    int rowEnd=n-1,columnEnd=n-1;
    while(rowStart<=rowEnd && columnStart<=columnEnd){
        int i=rowStart,j=columnStart;
        for(j=columnStart;j<=columnEnd;j++)
            cout<<v[i][j]<<" ";
        for(i=rowStart+1,j--;i<=rowEnd;i++)
            cout<<v[i][j]<<" ";
        for(j=columnEnd-1,i--;j>=columnStart;j--)
            cout<<v[i][j]<<" ";
        for(i=rowEnd-1,j++;i>=rowStart+1;i--)
            cout<<v[i][j]<<" ";
        rowStart++;columnStart++;rowEnd--;columnEnd--;
    }
    cout<<"\n";
}


int main(){
    int n;
    cin>>n;
    vii v(n,vi(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>v[i][j];
        }
    }
    printSpiralForm(v,n);
    return 0;
}
