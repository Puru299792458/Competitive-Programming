#include <iostream>
#include <cstdlib>

using namespace std;

int squareSumDigits(int n){
    int ans =0;
    while (n){
        ans += (n%10) * (n%10);
        n /= 10;
    }
    return ans;
}

bool happyChecker(int n){
    while(1){
        if (n==1) return true;
        n = squareSumDigits(n);
        if (n==2 || n==3 || n==4 || n==5) return false;
    }
    return false;
}

int main(){
    int n,ans;
    cin>>n;
    if (happyChecker(n) == 1) cout<<"true\n";
    else cout<<"false\n";
    return 0;
}
