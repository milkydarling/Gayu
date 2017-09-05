#include<stdio.h>
void main()
{
int n,i,fact=0;
scanf("%d",&n);
if(n!=0)
{
for(i=1;i<=n;i++)
{
fact=fact*i;
}
}
printf("%d",fact);
}
