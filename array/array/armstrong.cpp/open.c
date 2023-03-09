
#include <stdio.h>

int main() {
    char sh;
    FILE *ptr;
    ptr=fopen("vikash.txt","r");

    if(ptr==NULL){
        printf("FILE IS NOT FOUND:");

    }
    sh=fgetc(ptr);
    while(!feof(ptr)){
        printf("%c",sh);
        sh=fgetc(ptr);
    }
    fclose(ptr);

    
    
    
    return 0;
}

