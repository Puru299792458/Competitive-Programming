#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

void generateNextPalindromeUtil(vi v,ll n){
  int mid=n/2;
  bool leftSmaller=false;
  int i=mid-1;//end of left side
  int j=(n%2)?mid+1:mid;//beginning of right side is decided whether n is odd or even
  while(i>=0 && v[i]==v[j]){
    i--;j++;
  }
  if(i<0 || v[i]<v[j]){
    leftSmaller=true;
  }
  while(i>=0){
    v[j]=v[i];
      j++;
      i--;
  }
  if(leftSmaller){
    int carry=1;
    i=mid-1;
    if(n%2==1){
      v[mid]+=carry;
      carry=v[mid]/10;
      v[mid]=v[mid]%10;
      j=mid+1;
    }else{
      j=mid;
    }
    while(i>=0){
      v[i]+=carry;
      carry=v[i]/10;
      v[i]=v[i]%10;
      v[j++]=v[i--];
    }
  }
  for(int i=0;i<v.size();i++){
    cout<<v[i];
  }
  cout<<"\n";
} 

bool allIs9(vi v,ll n){
  for(int i=0;i<n;i++){
    if(v[i]!=9){
      return false;
    }
  }
  return true;
}

void generateNextPalindrome(vi v,ll n){
  int i;
  if(allIs9(v,n)){
    cout<<1;
    for(i=1;i<n;i++){
      cout<<0;
    }
    cout<<1<<"\n";
  }else{
    generateNextPalindromeUtil(v,n);
  }
}

int main(){
  int t;
  cin>>t;
  while(t--){
    string n;
    cin>>n;
    vi v;
    for(int i=0;i<n.length();i++){
      v.push_back(n[i]-48);
    }
    generateNextPalindrome(v,v.size());
  }
  return 0;
}
