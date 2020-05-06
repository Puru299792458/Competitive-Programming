#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <unordered_map>
#include <string>
#include <sstream>

using namespace std;

typedef unordered_map<string,int> umsi;
typedef umsi::iterator itr;
int main(){
    string s;
    getline(cin,s);
    umsi wordFreq;
    stringstream ss(s);
    string word;
    while(ss>>word){
        ++wordFreq[word];
    }
    itr i;
    for(i=wordFreq.begin();i!=wordFreq.end();i++){
        cout<<i->first<<" "<<i->second<<"\n";
    }
    return 0;
}
