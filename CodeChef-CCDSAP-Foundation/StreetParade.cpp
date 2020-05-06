#include <iostream>
#include <stack>
#include <algorithm>

using namespace std;

typedef stack<int> si;

int main(){
    int n;
    while(true){
        int i;
        cin>>n;
        if(n==0)
            return 0;
        int a[n],result[n],k=-1;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        si s;
        for(i=0;i<n-1;i++){
            //cout<<a[i]<<"\n";
            if(s.empty()){
                if(a[i]>a[i+1]){
                    s.push(a[i]);
                }else{
                    result[++k]=a[i];
                }
            }else{
                if(s.top()>a[i] && a[i]>a[i+1]){
                    s.push(a[i]);
                }else if(s.top()<a[i] && a[i]>a[i+1]){
                    //cout<<a[i]<<" inner else if \n";
                    while(!s.empty() && a[i]>s.top()){
                        result[++k]=s.top();
                        s.pop();
                    }
                    s.push(a[i]);
                }else if(s.top()>a[i] && a[i]<a[i+1]){
                    //cout<<a[i]<<" inner else if 2 \n";
                    result[++k]=a[i];
                }else if(s.top()<a[i] && a[i]<a[i+1]){
                    while(!s.empty() && a[i]>s.top()){
                        result[++k]=s.top();
                        s.pop();
                    }
                    s.push(a[i]);
                }
            }
        }
        //cout<<"a["<<i<<"]"<<" = "<<a[i]<<"\n";
        //cout<<"s.top()"<<" = "<<s.top()<<"\n";
        if(s.top()<a[i]){
            while(s.top()<a[i]){
                result[++k]=s.top();
                s.pop();
                if(s.empty())
                    break;
            }
            s.push(a[i]);
            if(!s.empty() && s.top()>=a[i]){
                result[++k]=a[i];
            }
        }else{
            result[++k]=a[i];
        }
        while(!s.empty()){
            result[++k]=s.top();
            s.pop();
        }
        //for(int i=0;i<n;i++){
        //    cout<<result[i]<<" ";
        //}cout<<"\n";
        int flag=0;
        for(i=1;i<n;i++){
            if(result[i-1]>result[i]){
                flag=1;
                break;
            }
        }
        if(flag)
            cout<<"no\n";
        else
            cout<<"yes\n";
    }
    return 0;
}
