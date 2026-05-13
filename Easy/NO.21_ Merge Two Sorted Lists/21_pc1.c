struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode new;
    struct ListNode* tail = &new;
    new.next = NULL;
    while(list1 && list2){
        if((list1->val)<=(list2->val)){
            tail->next = list1;
            list1 = list1->next;
        }
        else{
            tail->next = list2;
            list2 = list2->next;
        }
        tail = tail->next;
    }//直到某個list空
    if(list1){
        tail->next = list1;
    }
    else tail->next = list2;
    return new.next;
}
