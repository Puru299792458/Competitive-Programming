// Complete the compare_lists function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
bool compare_lists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    if(head1==nullptr || head2==nullptr){
        return 0;
    }else{
        int flag=0;
        if((head1!=nullptr || head2!=nullptr) && (head1->data==head2->data)){
            head1=head1->next;
            head2=head2->next;
            flag=1;
        }else{
            return 0;
        }
        while(head1!=nullptr && head2!=nullptr) {
            if(head1->data!=head2->data){
                return 0;
            }else{
                head1=head1->next;
                head2=head2->next;
            }
        }
    }
    if((head1!=nullptr && head2==nullptr)||(head2!=nullptr && head1==nullptr)){
        return 0;
    }
    return 1;
}
