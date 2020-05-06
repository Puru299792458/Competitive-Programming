#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

typedef vector<int> vi;
typedef vector<vi> vii;

bool isMagicSquare(vi v){
    vii a(3,vi(3));
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            a[i][j]=v[3*i+j];
        }
    }
    int temp=0;
    for(int i=0;i<3;i++){
        temp=0;
        for(int j=0;j<3;j++){
            temp+=a[i][j];
        }
        if(temp!=15){
            return 0;
        }
    }
    temp=0;
    for(int j=0;j<3;j++){
        temp=0;
        for(int i=0;i<3;i++){
            temp+=a[i][j];
        }
        if(temp!=15){
            return 0;
        }
    }
    temp=0;
    for(int i=0;i<3;i++){
        temp+=a[i][i];
    }
    if(temp!=15){
        return 0;
    }
    temp=0;
    for(int i=0;i<3;i++){
        temp+=a[3-i-1][i];
    }
    if(temp!=15){
        return 0;
    }
    return 1;
}

void generateMagicSquares(vii &magic){
    vi temp(9);
    for(int i=0;i<9;i++){
        temp[i]=i+1;
    }
    do{
        if(isMagicSquare(temp)){
            magic.push_back(temp);
        }
    }while(next_permutation(temp.begin(),temp.end()));
}

int diffBetweenVector(vi m,vi n){
    int res=0;
    for(int i=0;i<9;i++){
        res+=abs(m[i]-n[i]);
    }
    return res;
}

int main(){
    vii v(3,vi(3));
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>v[i][j];
        }
    }
    vi p;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            p.push_back(v[i][j]);
        }
    }
    int min_moves=999999;
    vii magic;
    generateMagicSquares(magic);
    for(int i=0;i<magic.size();i++){
        min_moves=min(min_moves,diffBetweenVector(p,magic[i]));
    }
    cout<<min_moves<<"\n";
    return 0;
}
