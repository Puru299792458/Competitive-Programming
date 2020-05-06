/*
 * For  reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
void printLinkedList(SinglyLinkedListNode* head) {
    if(head==nullptr){
        return;
    }else{
        while(head!=nullptr){
            cout<<head->data<<"\n";
            head=head->next;
        }
    }
}
