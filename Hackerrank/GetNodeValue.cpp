// Complete the getNode function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
int getNode(SinglyLinkedListNode* head, int positionFromTail) {
    SinglyLinkedListNode* p1=head;
    SinglyLinkedListNode* p2=nullptr;
    for(int i=0;i<positionFromTail;i++){
        if(p1){
            p1=p1->next;
        }
    }
    while(p1){
        if(p2==nullptr){
            p2=head;
        }else{
            p2=p2->next;
        }
        p1=p1->next;
    }
    if(p2)
        return p2->data;
    return -1;
}
