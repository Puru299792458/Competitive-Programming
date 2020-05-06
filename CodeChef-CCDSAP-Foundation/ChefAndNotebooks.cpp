#include <iostream>
#include <cstdlib>
#include <algorithm>

 using namespace std;

 int main(){
     int t;
     cin>>t;
     while(t--){
         int x,y,k,n,flag=0;
         cin>>x>>y>>k>>n;
         x=x-y;
         for(int i=0;i<n;i++){
             int p,c;
             cin>>p>>c;
             if(x-p<=0&&k>=c){
                 x-=p;
                 flag=1;
             }
         }
         if(flag){
             cout<<"LuckyChef\n";
         }else{
             cout<<"UnluckyChef\n";
         }
         flag=0;
     }
 }
