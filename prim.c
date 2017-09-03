#include<stdio.h>
void main()
{
int n,m,i,flag=0,j;
scanf("%d%d",&n,&m);
for(i=n;i<=m;i++)
{
for(j=i;j<=i/2;j++)
{
if(i%j==0)
{
printf("%d",i);
}
}
}
}
