// Write a program in C to remove characters from a string except alphabets.

#include <stdio.h>
#include <ctype.h>

void removechar(char str[])
{
    int i = 0, j = 0;

    while (str[i])
    {

        if (isalpha(str[i]))
        {
            str[j++] = str[i];
        }
        i++;
    }
    str[j] = '\0';
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    gets(str);

    removechar(str);

    printf("Output String: %s\n", str);

    return 0;
}
