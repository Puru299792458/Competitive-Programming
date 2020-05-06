#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main(){
    string str;
    cin>>str;
    int start=0;
    int len=str.length();
    int max_=1,low,high;
    for(int i=1;i<len;i++){
        //Even Length longest plindrome
        low=i-1;
        high=i;
        while(low>=0 && high<len && str[low]==str[high]){
            if((high-low+1)>max_){
                start=low;
                max_=high-low+1;
            }
            --low;
            ++high;
        }
        //For odd length longest palindrome
        low=i-1;
        high=i+1;
        while(low>=0 && high<len && str[low]==str[high]){
            if((high-low+1)>max_){
                start=low;
                max_=high-low+1;
            }
            --low;
            ++high;
        }
    }
    for(int i=start;i<(start+max_);i++){
        cout<<str[i];
    }cout<<"\n";
    cout<<"The length is :"<<max_<<"\n";
    return 0;
}
