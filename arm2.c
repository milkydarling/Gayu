#include<stdio.h>
void main()
{
int n,m,r,result=0,i;
scanf("%d%d",&n,&m);
for(i=n;i<=m;i++)
{
while(i!=0)
{
o=i;
r=i%10;
result=result+(r*r*r);
i=i/10;
}
if(result==o)
{
printf("armstorng num %d",i);
}
