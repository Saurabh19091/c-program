// delete last element
struct node* deletelastindex(struct node * head){
    struct node *p =head;
    struct node *q =head->next;
    while(q->next!=0)
    {
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    free(q);
    


    return head;
}