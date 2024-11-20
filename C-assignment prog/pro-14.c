// Find ascii value of given number

#include <stdio.h>

void main()
{
    char c;

    printf("Enter a character: ");
    scanf("%c", &c);

    printf("The Ascii value of '%c' is: %d\n", c, (int)c);
}