// Complete the has_cycle function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
bool has_cycle(SinglyLinkedListNode* head) {
    SinglyLinkedListNode* sp=head;
    SinglyLinkedListNode* fp=head;
    while(sp && fp &&fp->next){
        sp=sp->next;
        fp=fp->next->next;
        if(sp==fp)
            return true;
    }
    return false;
}
