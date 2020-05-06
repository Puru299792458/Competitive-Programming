//Using STL in sorted order
/*#include <iostream>
#include <cstdlib>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    string str;
    cin>>str;
    while(next_permutation(str.begin(),str.end())){
        cout<<str<<"\n";
    }
    return 0;
}
*/

//Without using STL
#include <iostream>
#include <cstdlib>
#include <string>
#include <algorithm>

using namespace std;

int findCeil(char str[],char first,int l,int h){
    int ceilIndex=l;
    for(int i=l+1;i<=h;i++){
        if(str[i]>first && str[i]<str[ceilIndex])
            ceilIndex=i;
    }
    return ceilIndex;
}

int main(){
    char str[]="ABCD";
    int size=strlen(str);
    sort(str,str+size);
    bool isFinished=false;
    while(!isFinished){
        cout<<str<<"\n";
        int i;
        for(i=size-2;i>=0;--i){
            if(str[i]<str[i+1])
                break;
        }
        if(i==-1){
            isFinished=true;
        }else{
            int ceilIndex=findCeil(str,str[i],i+1,size-1);
            swap(str[i],str[ceilIndex]);
            sort(str+i+1,str+size);
        }
    }
}
