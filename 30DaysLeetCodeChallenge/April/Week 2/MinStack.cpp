#include <iostream>
#include <cstdlib>
#include <vector>
#include <stack>
#include <utility>

using namespace std;

typedef vector<int> vi;

/*
class MinStack{
public:
    int t;
    vi v;
    MinStack(){
        t =-1;
    }
    void push(int x){
        v.push_back(x);
        ++t;
    }
    void pop(){
        v.pop_back();
        --t;
    }
    int top(){
        return v[t];
    }
    int getMin(){
        int min = *min_element(v.begin(),v.end());
        return min;
    }
};
*/

//Efficient Approach 
class MinStack{
    public:
        stack<pair<int,int> > st;
        
        MinStack(){}
        
        void push(int x){
            int min_ele;
            if (st.empty()){
                min_ele = x;
            }else{
                min_ele = min(x,st.top().second);
            }
            st.push(make_pair(x,min_ele));
        }
        
        void pop(){
            st.pop();
        }
        
        int top(){
            return st.top().first;
        }
        
        int getMin(){
            return st.top().second;
        }
};



int main(){
    MinStack *obj = new MinStack();
    obj->push(10);
    cout<<obj->top()<<"\n";
    obj->pop();
    cout<<obj->top()<<"\n";
    return 0;
}
