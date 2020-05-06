#include <iostream>
#include <cstdlib>
#include <list>

using namespace std;
typedef list<char> li;

int main(){
    li l;
    int i;
    string arr[]={ "geeksforgeeks", "geeks", "geek", "geezer","geekathon"};
    for(int i=0;i<arr[0].size();i++){
        l.push_back(arr[0][i]);
    }
    li::iterator it=l.begin();
    for(i=1;i<5&&it!=l.end();i++){
        for(int j=0;j<arr[i].size();j++){
            //cout<<arr[i][j]<<" = "<<*it<<"\n";
            if(arr[i][j]!=*it){
                for(;it!=l.end();++it){
                    l.erase(it);
                }
                break;
            }
            ++it;
        }
        it=l.begin();
    }
    for(it=l.begin();it!=l.end();it++){
        cout<<*it<<" ";
    }cout<<"\n";
    return 0;
}
