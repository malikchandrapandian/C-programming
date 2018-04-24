#include<stdio.h>
int main()
{
  long int a;
  scanf("%ld",&a);
  if(a<=100000)
  {
    if(a<0)
    {
      printf("Negative");
    }
    else if(a>0)
    {
      printf("Positive");
    }
    else
    {
      printf("Zero");
    }
  }
  return 0;
}
