#include <iostream>
#include <cstdlib>
#include <list>
#include <unordered_map>

using namespace std;

typedef list<int> li;
typedef li:: iterator lit;
typedef unordered_map<int,int> ui;
typedef unordered_map<int,lit> ump;

class LRUCache{
    public:
        li recent;
        ump map;
        ui cache;
        int capacity;
        LRUCache(int capacity);
        int get(int key);
        void put(int key,int value);
    private:
        void use(int key);
};

LRUCache::LRUCache(int capacity): capacity(capacity){}

void LRUCache::use(int key){
    if(map.find(key)!=map.end()){
        recent.erase(map[key]);
    }else if(recent.size()>=capacity){
        int old = recent.back();
        recent.pop_back();
        cache.erase(old);
        map.erase(old);
    }
    recent.push_front(key);
    map[key] = recent.begin();
}

int LRUCache::get(int key){
    if(cache.find(key)==cache.end()){
        return -1;
    }
    use(key);
    return cache[key];
}

void LRUCache::put(int key,int value){
    use(key);
    cache[key] = value;
}

int main(){
    LRUCache* obj = new LRUCache(2);
    obj->put(1,1);
    obj->put(2,2);
    cout<<obj->get(1)<<"\n";
    obj->put(3,3);
    cout<<obj->get(2)<<"\n";
    obj->put(4,4);
    cout<<obj->get(1)<<"\n";
    cout<<obj->get(3)<<"\n";
    cout<<obj->get(4)<<"\n";
    return 0;
}
