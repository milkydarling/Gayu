#include<stdio.h>
void main()
{
char ch;
ch=30;
while(ch<=120)
{
printf("%c[%d]",ch,ch);
ch++;
}
}
