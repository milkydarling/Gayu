#include <stdio.h>
void main()
{
    int n,m, minMultiple;
    printf("Enter two positive integers: ");
    scanf("%d %d", &n, &m);
    minMultiple = (n>m) ? n : m;
    while(1)
    {
        if( minMultiple%n==0 && minMultiple%m==0 )
        {
            printf("The LCM of %d and %d is %d.", n, m,minMultiple);
            break;
        }
        ++minMultiple;
    }
}
