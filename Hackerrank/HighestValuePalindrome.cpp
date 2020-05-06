#include <iostream>
#include <cstdlib>
#include <string>
#include <algorithm>

using namespace std;

bool isPalindrome(string s){
    for(int i=0;i<s.length()/2;i++){
        if(s[i]!=s[s.length()-i-1])
            return false;
    }
    return true;
}

int main(){
    int n,k;
    cin>>n>>k;
    string str;
    cin>>str;
    string p=str;
    if(n>str.length()){
        for(int i=0;i<(n-str.length());i++){
            str='0'+str;
        }
    }
    int l=0,r=str.length()-1;
    while(l<r){
        if(str[l]!=str[r]){
            p[l]=p[r]=max(str[l],str[r]);
            k--;
        }
        l++;
        r--;
    }
    if(k<0){
        cout<<-1;
        return 0;
    }
    l=0;
    r=str.length()-1;
    while(l<=r){
        if(l==r){
            if(k>0)
                p[l]='9';
        }
        if(p[l]<'9'){
            if(k>=2 && p[l]==str[l] && p[r]==str[r]){
                k-=2;
                p[l]=p[r]='9';
            }else if(k>=1 && k >= 1 && (p[l]!=str[l]||p[r]!=str[r])){
                k--;
				p[l]=p[r]='9';
            }
        }
        l++;
        r--;
    }
    cout<<p<<"\n";
    return 0;
}
