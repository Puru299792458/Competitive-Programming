// Complete the reverse function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* reverse(SinglyLinkedListNode* head) {
    SinglyLinkedListNode *temp=nullptr;
    SinglyLinkedListNode *result=nullptr;
    if(head == nullptr){
        return head;
    }
    while(head){
        result=head->next;
        head->next=temp;
        temp=head;
        head=result;
    }
    head=temp;
    return head;
}
