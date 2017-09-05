#include<stdio.h>
void main()
{
int  i,j;
int sum1=0,sum2=0;
for(i=1;i<=15;i++)
{
sum1=sum1+i;
}
for(j=15;j<=45;j++)
{
if(j%2==1)
{
sum2=sum2+j;
}
}
printf("%d%d",sum1,sum2);
}
