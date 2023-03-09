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

      linklisttravesal(head);


    
    

    return 0;
}
