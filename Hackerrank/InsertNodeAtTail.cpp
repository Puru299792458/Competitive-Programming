// Complete the insertNodeAtTail function below.

/*
 * For reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
    if(head==nullptr){
        head=new SinglyLinkedListNode(data);
    }else{
        SinglyLinkedListNode* temp=head;
        while(temp->next!=nullptr){
            temp=temp->next;
        }
        temp->next=new SinglyLinkedListNode(data);
    }
    return head;
}
