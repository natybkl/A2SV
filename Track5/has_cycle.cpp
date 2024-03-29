bool has_cycle(SinglyLinkedListNode* head) {
    SinglyLinkedListNode* slow =  head, *fast = head;
    while(fast and fast->next){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast) return true;
    }
    
    return false;
}
