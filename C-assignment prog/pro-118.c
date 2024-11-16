// Write a program in C to combine two strings manually

#include <stdio.h>

int main()
{
    char str1[20],str2[20];
    int i, j;

    printf("Enter first string : ");
    gets(str1);

    printf("Enter second string : ");
    gets(str2);

    for (i = 0; str1[i] != '\0'; i++);
    for (j = 0; str1[j] != '\0'; j++)
    {
        str1[i] = str2[j];
        i++;
    }
    str2[i] = '\0';

    printf("Combined string : %s\n", str1);

    return 0;
}