#include<stdio.h>
void main()
{
int n,t,rm,rev;
scanf("%d",&n);
t=n;
while(n>0)
{
rm=n%10;
rev=rev*10+rm;
n=n/10;
}
if(t==rev)
	printf("yes");
else
	printf("no");
}
