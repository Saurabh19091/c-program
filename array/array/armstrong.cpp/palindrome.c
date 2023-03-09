#include<stdio.h>
#include<string.h>


int main()
{
  char a[100];
  int len,flag=0;
  gets(a);
  len=strlen(a);               // madam
  for(int i=0;i<len;i++){
      if(a[i]==a[len-1-i]){         
          flag=1;
          break;
      }
  }
  if(flag){
      printf("string is  palindrome");

  }
  else{
      printf("string is  not palindrome");
  }
    return 0;
}
