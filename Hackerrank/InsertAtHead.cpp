// Complete the insertNodeAtHead function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) {
	if(llist==nullptr){
        llist=new SinglyLinkedListNode(data);
    }else{
        SinglyLinkedListNode* temp=llist;
        llist =new SinglyLinkedListNode(data);
        llist->next=temp;
    }
    return llist;
}
