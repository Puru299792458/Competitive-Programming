#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstdio>
#include <string>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int d;
        string s;
        cin>>d>>s;
        int countPresent=0,countProxy=0;
        for(int i=0;i<d;i++){
            if(s[i]=='P'){
                ++countPresent;
            }
        }
        double attendancePercent=floor((countPresent/double(d))*100);
        if(attendancePercent>=75){
            cout<<0<<"\n";
        }else{
            if(d>4){
                for(int i=2;i<d-2;i++){
                    if(s[i] =='A'){
                        if((s[i-1]=='P' || s[i-2]=='P') && (s[i+1]=='P' || s[i+2]=='P')){
                            ++countPresent;
                            ++countProxy;
                        }
                    }
                    attendancePercent=floor((countPresent/double(d))*100);
                    if(attendancePercent>=75){
                        cout<<countProxy<<"\n";
                        break;
                    }
                }
                if(attendancePercent<75){
                    cout<<"-1\n";
                }
            }else{
                cout<<"-1\n";
            }
        }
    }
    return 0;
}
