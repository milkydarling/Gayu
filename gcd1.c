#include<stdio.h>
void main()
{
int n,m,i,gcd1;
scanf("%d%d",&n,&m);
for(i=1;i<=n&&i<=m;i++)
{
if(n%i!=0&&m%i!=0)
{
gcd1=i;
}
printf("gcd for %d and %d is %d",n,m,gcd1");
}
}
