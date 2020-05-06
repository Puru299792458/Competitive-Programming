// Complete the deleteNode function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* head, int position) {
    int k=0;
    if(head==nullptr){
        return head;
    }
    if(position==0){
        head=head->next;
        return head;
    }
    SinglyLinkedListNode* temp=head;
    SinglyLinkedListNode* prev;
    while(temp!=nullptr && k<position){
        k++;
        prev=temp;
        temp=temp->next;
    }
    if(k!=position){
        return head;
    }
    if(temp==nullptr){
        return head;
    }
    prev->next=temp->next;
    return head;
}
