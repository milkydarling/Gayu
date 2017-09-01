#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
printf("enter the values for a,b,c");
scanf("%d%d%d",&a,&b,&c);
if((a<c)&&(b<c))
{
printf("c is large");
}
else
if((a>c)&&(a>b))
{
printf("a is large");
}
else
{
printf("b is large");
}
}
