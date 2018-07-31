#include<stdio.h>
int main()
{
 int count_words=0,i;
 int count_char=0;
 char str[20];
 printf("Enter string : ");
 scanf("%s",str);
 for(i=0; str[i]!=NULL; i++)
 {
   count_char++;
 }
 printf("%d",count_char);
 return 0;
}
