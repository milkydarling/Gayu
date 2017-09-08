#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
 void main()
 {
    char inputString[20];
    printf("Enter a String for Integer conversion \n");
    gets(inputString);
     printf("Integer: %d \n", atoi(inputString));
    getch();
}
