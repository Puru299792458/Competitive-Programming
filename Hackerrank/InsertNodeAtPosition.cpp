// Complete the insertNodeAtPosition function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data, int position) {
    int k=0;
    SinglyLinkedListNode* temp=head;
    SinglyLinkedListNode* prev;
    SinglyLinkedListNode* newNode=new SinglyLinkedListNode(data);
    while(temp!=nullptr && k<position){
        prev=temp;
        temp=temp->next;
        ++k;
    }
    newNode->next=temp;
    prev->next=newNode;
    return head;
}
