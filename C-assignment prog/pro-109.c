// Write a program in C to compare two strings without using string library functions.
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[30], str2[30];
    int result, str1len = 0, str2len = 0;

    printf("Enter the first string: ");
    gets(str1);

    printf("Enter the second string: ");
    gets(str2);

    for (int i = 0; str1[i] != '\0'; i++)
    {
        str1len++;
    }
    for (int i = 0; str2[i] != '\0'; i++)
    {
        str2len++;
    }
    result = str1len - str2len;
    if (result < 0)
    {
        printf("The first string is smaller than second.\n");
    }
    else if (result > 0)
    {
        printf("The first string is larger than second.\n");
    }
    else
    {
        printf("Both strings are same.\n");
    }
}