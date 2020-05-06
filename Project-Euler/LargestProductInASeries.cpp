#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

typedef long long int lli;

int main(){
    char a[1002];
    int i,j;
    lli ans=1;
    lli temp=1;
    fflush(stdin);
    gets(a);
    for(i=0;i<13;i++){
        ans*=(a[i]-48);
    }
    temp=ans;
    j=12;
    for(i=0;i<987;i++){
        j++;
        if((a[j]-48)==0){
            j++;
            i=j;
            temp=1;
            while(j!=(i+13)){
                temp*=(a[j]-48);
                if(temp>ans)
                    ans=temp;
                j++;
            }
        }
        if((a[i]-48)!=0)
            temp=((temp/(a[i]-48))*(a[j]-48));
        if(temp>ans)
            ans=temp;
    }
    cout<<ans;
    return 0;
}
