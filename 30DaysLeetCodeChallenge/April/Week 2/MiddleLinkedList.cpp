#include <iostream>
#include <cstdlib>

using namespace std;

struct ListNode { 
    int val;
    ListNode *next;
    ListNode(int x): val(x),next(NULL){}
};

int main(){
    int val,n,i=0,cnt=0;
    cout<<"Enter root node\n";
    cin>>val;
    ListNode *node = new ListNode(val);
    ListNode *p1 = node,*p2=node;
    cout<<"Enter the number of elemets to be inserted in the list\n";
    cin>>n;
    cout<<"Enter the elements using space\n";
    for(i=0;i<n;i++){
        cin>>val;
        ListNode *tempNode = new ListNode(val);
        p1->next = tempNode;
        p1 = p1->next;
    }
    p1 = node;i=0;
    while(p2->next != NULL){
        if(i==0){
            ++cnt;
            p2=p2->next;
            i=1;
        }else if(i==1){
            ++cnt;
            p2 = p2->next;
            p1 = p1->next;
            i=0;
        }
    }
    cnt+=1;
    if(cnt%2==1){
        cout<<"Middle Element : "<<p1->val<<"\n";
    }else{
        cout<<"Middle Element : "<<p1->next->val<<"\n";
    }
    return 0;
}
