#include<stdio.h>
#include<string.h>


int main()
{
    char a[100],b[100];
    printf("enter the string ");
    gets(a);

     strcpy(b,a);
     strrev(b);

    if(strcmp(b,a)==0){
        printf("string is palindrome");
    }
    else {
        printf("string is not palindrome");
    }

    
    return 0;
}
