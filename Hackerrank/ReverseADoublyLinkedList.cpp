// Complete the reverse function below.

/*
 * For your reference:
 *
 * DoublyLinkedListNode {
 *     int data;
 *     DoublyLinkedListNode* next;
 *     DoublyLinkedListNode* prev;
 * };
 *
 */
DoublyLinkedListNode* reverse(DoublyLinkedListNode* head) {
    DoublyLinkedListNode* temp=nullptr;
    DoublyLinkedListNode* nextNode=nullptr;
    while(head){
        nextNode=head->next;
        head->next=temp;
        temp=head;
        head=nextNode;
    }
    temp->prev=nullptr;
    head=temp;
    return head;
}
