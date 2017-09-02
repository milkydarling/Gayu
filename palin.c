#include<stdio.h>
void main()
{
char a;
int i,len,flag=0;
scanf("%s",&a);
len=strlen(a);
for(i=0;i<len;i++);
{
if(a[i]==a[len-i-1)
{
flag=flag+1;
}
if(flag==len)
{
printf("palindrome");
}
else
{
printf("not paindrome");
}
}
}
