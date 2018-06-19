#include<stdio.h>
int main()
{
  int a;
  scanf("%d",&a);
  if(1<=a<=100000)
  {
    if(a%2==0)
    {
     printf("Even");
    }
    else
    {
      printf("Odd");
    }
  }
  else
    {
      printf("invalid");
    }
  
  return 0;
}
