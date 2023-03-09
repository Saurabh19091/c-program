// creation of link list

#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;//self reference structure  
};
void linklisttravesal(struct node *ptr){
    while(ptr!=NULL){
        printf("Element: %d\n",ptr->data);
        ptr=ptr->next;
    }
}
// case 1 delete first elemnt 
struct node* deletelist(struct node * head){
    struct node *ptr =head;
    head=head->next;
    free(ptr);
    return head;
}
// case 2
struct node* deleteAtindex(struct node * head,int index){
    struct node *p =head;
    struct node *q =head->next;
    for (int i = 0; i <index-1; i++)
    {
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    free(q);
    


    return head;
}
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
// delete the value element
struct node* deleteAtvalue(struct node * head,int value){
    struct node *p =head;
    struct node *q =head->next;
    while(q->data != value && q->next != NULL)
    {
        p=p->next;
        q=q->next;
    }
    if(p->data == value){
    p->next=q->next;
    free(q);
    }
    


    return head;
}

int main()
{
    struct node * head;
    struct node * second;
    struct node * third;
    // allocate memory for a linked list in a heap
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));

      third=(struct node*)malloc(sizeof(struct node));
      // linked first and second node 
      head->data=7;
      head->next=second;
    // linked second and third nodes
      second->data=11;
      second->next=third;
// terminate after third node
      third->data=99;
      third->next=NULL;
      printf("list before deletion\n");

      linklisttravesal(head);
      //head=deletelist(head);// delete first element
     // head=deleteAtindex(head,2);
     //head=deletelastindex(head);
     head=deleteAtvalue(head,11);

      printf("list after deletion\n");
      linklisttravesal(head); 


    
    

    return 0;
}
