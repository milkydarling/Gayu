#include<stdio.h>
void main()
{
int base,expo;
int result=1;
scanf("%d",&base);
scanf("%d",&expo);
while(expo!=0)
{
result=result*base;
expo=expo-1;
}
printf("%d",result);
}
