// Complete the sortedInsert function below.

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
DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* head, int data) {
    DoublyLinkedListNode* temp=head;
    DoublyLinkedListNode* newNode=new DoublyLinkedListNode(data);
    if(temp->data>data){
        temp->prev=newNode;
        newNode->next=temp;
        head=newNode;
        return head;
    }
    while(temp){
        if(temp && temp->data > data){
            temp->prev->next=newNode;
            newNode->prev=temp->prev;
            temp->prev=newNode;
            newNode->next=temp;
            break;
        }
        if(temp->next==nullptr){
            temp->next=newNode;
            newNode->prev=temp;
            break;
        }
        temp=temp->next;
    }
    return head;
}
