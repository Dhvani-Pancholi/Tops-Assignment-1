// Write a program in C to copy one string to another string.

#include <stdio.h>
#include <string.h>
int main()
{
    char str[30], cpystr[30];
    printf("Enter String : ");
    gets(str);
    strcpy(cpystr, str);
    printf("Enterd string is %s\n", str);
    printf("Copied string is %s", cpystr);

    return 0;
}