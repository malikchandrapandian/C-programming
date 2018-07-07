#include<stdio.h>
void main()
{
int a[10],N,K,i,b;
scanf("%d",&N);
scanf("%d",&K);
for(i=1;i<N;i++)
{
	scanf("%d",&a[i]);
}
for(i=1;i<=K;i++)
{
	b=b+a[i];
}
printf("%d",b);
}
