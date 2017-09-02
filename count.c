#include<stdio.h>
void main()
{
int n,count;
printf("enter n value");
scanf("%d",&n);
while(n!=0)
{
n=n/10;
count=count+1;
}
printf("%d",count);
}
