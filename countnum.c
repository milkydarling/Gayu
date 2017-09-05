#include <stdio.h>
#define MAX 100 
int main()
{
    char str[MAX];
    int alpha, digit, others, i;
    alpha = digit = others = i = 0;
    printf("Enter any string : ");
    gets(str);
    while(str[i]!='\0')
    {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            alpha++;
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            digit++;
        }
        else
        {
            others++;
        }

        i++;
    }
    printf("Alphabets = %d\n", alpha);
    printf("Digits = %d\n", digit);
    printf("Special characters = %d", others);
    return 0;
}
   
