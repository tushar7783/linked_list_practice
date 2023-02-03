SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* llist) {
    if(llist==NULL || llist->next==NULL)
        return llist;
    SinglyLinkedListNode* temp1=llist;
    SinglyLinkedListNode* temp2=llist->next;
    while(temp2!=NULL)
    {
        if(temp2->data==temp1->data)
        {
            SinglyLinkedListNode* temp3=temp2;
            temp1->next=temp3->next;
            temp2=temp2->next;
            delete temp3;
        }
        else
        {
            temp2=temp2->next;
            temp1=temp1->next;
        }
    }
    
    return llist;
    
}
