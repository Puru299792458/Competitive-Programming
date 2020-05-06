#include <iostream>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <queue>

using namespace std;

typedef vector<int> vi;
typedef queue<int> qi;

vi getDivisors(int num){
    vi v;
    for(int i=2;i<=sqrt(num);i++){
        if(num%i==0){
            v.push_back(i);
            v.push_back(num/i);
        }
    }
    sort(v.begin(),v.end());
    return v;
}

bool isPrime(int num){
    if(num==2 || num==3 || num==5 ||num==7 ||num==11)
        return 1;
    if(num%2==0)
        return 0;
    for(int i=3;i<=sqrt(num);i++){
        if(num%i==0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int n,m,cnt=0;
    cin>>n>>m;
    if(isPrime(n) || isPrime(m)){
        cout<<-1<<"\n";
        return 0;
    }
    qi q;
    vi d(m+1,-1);
    q.push(n);
    d[n]=0;
    while(!q.empty()){
        int q_f=q.front();
        q.pop();
        if(q_f==m){
            break;
        }
        for(int i:getDivisors(q_f)){
            int dis=q_f+i;
            if(dis<=m && d[dis]==-1){
                q.push(dis);
                d[dis]=d[q_f]+1;
            }
        }
    }
    cout<<d[m]<<"\n";
    return 0;
}
