#include "../headers.hpp"

//indexes maintains the

int main(){
    int pages[]={7, 0, 1, 2, 0, 3, 0, 4, 2, 3, 0, 3, 2};
    int n=13;
    int capacity=4;
    usetint s;
    umapint indexes;
    int page_faults=0;
    for(int i=0;i<n;i++){
        //Check if the set can hold more pages
        if(s.size()<capacity){
            if(s.find(pages[i])==s.end()){
                //Insert into the set if not already present which represents the page fault
                s.insert(pages[i]);
                page_faults+=1;
            }
            indexes[pages[i]]=i;
        //If set is full
        }else{
            if(s.find(pages[i])==s.end()){
                int lru=INT_MAX,val;
                for(auto it=s.begin();it!=s.end();it++){
                    if(indexes[*it]<lru){
                        lru=indexes[*it];
                        val=*it;
                    }
                }
                s.erase(val);
                s.insert(pages[i]);
                page_faults+=1;
            }
            indexes[pages[i]]=i;
        }
    }
    cout<<page_faults<<"\n";
    return 0;
}
