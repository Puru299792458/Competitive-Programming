// Complete the mergeLists function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    if(head1==nullptr){
        return head2;
    }
    if(head2==nullptr){
        return head1;
    }
    SinglyLinkedListNode* result=new SinglyLinkedListNode(0);
    result=result;
    result->next=nullptr;
    SinglyLinkedListNode* temp=result;

    while(head1!=nullptr && head2!=nullptr){
        if(head1->data <= head2->data){
            temp->next=head1;
            temp=temp->next;
            head1=head1->next;
        }else{
            temp->next=head2;
            temp=temp->next;
            head2=head2->next;
        }
    }
    if(head1!=nullptr){
        temp->next=head1;
    }else{
        temp->next=head2;
    }
    temp=result->next;
    return temp;
}
