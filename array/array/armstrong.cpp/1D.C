#include<stdio.h>
struct student
{
    char name [20];
    int roll_no;
    float marks;

};





int main()
{
    struct student s[20],temp;
    int i ,j,n;
    printf("enter the total number of student\n");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("enter name,enter roll no, enter marks\n");
        scanf("%s%d%f",&s[i].name,&s[i].roll_no,&s[i].marks);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(s[i].marks<s[j].marks){
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;

            }
        }
        printf("decending array is \n");
        for(i=0;i<n;i++){
            printf("%s\n",s[i].name);
             printf("%d\n",s[i].roll_no);
              printf("%.2f\n",s[i].marks);

        }
       
    }
    

    return 0;
}
