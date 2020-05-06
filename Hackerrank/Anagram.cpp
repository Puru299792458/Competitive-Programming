#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>

using namespace std;

typedef vector<int> vb;

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        if(str.length()%2){
            cout<<-1<<"\n";
        }else{
            int count=0;
            vb v1(26,0),v2(26,0);
            int n=str.length();
            for(int i=0;i<n/2;i++){
                ++v1[str[i]-97];
            }
            for(int i=n/2;i<n;i++){
                ++v2[str[i]-97];
            }
            for(int i=0;i<26;i++){
                if(v1[i]>v2[i]&& v1[i]!=0)
                    count+=abs(v1[i]-v2[i]);
            }
            cout<<count<<"\n";
        }
    }
    return 0;
}
