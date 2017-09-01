#include<stdio.h>
#include<conio.h>
void main()
{
int n;
printf("Enter n value");
scanf("%d",&n);
if(n<0)
{
printf("the given number is negative");
}
else
if(n>0)
{
printf("the given number is positive");
}
else
{
printf("the number is zero");
}
}
