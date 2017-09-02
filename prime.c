#include<stdio.h>
void main()
{
int i,n,flag=o;
scanf("%d",&n);
for(i=2;i<n/2;i++)
{
if(n%2==0)
{
flag=1;
break;
}
}
if(flag==0)
{
printf("prime");
}
else
{
printf("not a prime");
}
}
