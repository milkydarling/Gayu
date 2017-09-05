#include<stdio.h>
void main()
{
int n,remaind,reverse=0;
scanf("%d",&n);
if(n!=0)
{
remaind=n%10;
reverse=reverse+remaind;
n=n/10;
}
printf("%d",reverse);
}
