#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

using namespace std;

int main(){
    srand(time(0));
    int cards[52];
    for(int i=0;i<52;i++){
        cards[i]=i;
    }
    for(int i=0;i<52;i++){
        int r=i+(rand()%(52-i));
        swap(cards[i],cards[r]);
    }
    cout<<"Shuffled Cards \n";
    for(int i=0;i<52;i++){
        cout<<cards[i]<<" ";
    }cout<<"\n";
    return 0;
}
