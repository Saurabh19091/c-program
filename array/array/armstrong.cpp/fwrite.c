#include<stdio.h>


int main()
{
    int num;
    FILE *ptr;
    ptr=fopen("vikash.txt","w");
    if(ptr==NULL){
        printf("file not found");
        exit(1);
    }
    printf("enter the num:");
    scanf("%d",&num);
    fprintf(ptr ,"%d",num);
    fclose(ptr);
    
    return 0;
}
