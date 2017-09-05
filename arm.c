#include<stdio.h>
void main()
{
int n,o,r,result=0;
scanf("%d",&n):
o=n;
while(o!=0)
{
r=o%10;
result=result+(r*r*r);
o=o/10;
}
if(r==n)
{
printf("armstrong num");
}
else
{
printf("not a armstrong num");
}
}
