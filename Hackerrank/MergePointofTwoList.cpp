// Complete the findMergeNode function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    SinglyLinkedListNode* list1=head1;
    SinglyLinkedListNode* list2=head2;
    int diff=0,l1=0,l2=0;
    while(list1){
        l1++;
        list1=list1->next;
    }
    while(list2){
        l2++;
        list2=list2->next;
    }
    if(l1>l2){
        list1=head1;list2=head2;
        diff=l1-l2;
    }else{
        list1=head2;list2=head1;
        diff=l2-l1;
    }
    for(int i=0;i<diff;i++){
        list1=list1->next;
    }
    while(list1 && list2){
        if(list1==list2){
            return list1->data;
        }
        list1=list1->next;
        list2=list2->next;
    }
    return -1;
}
