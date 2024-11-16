// Write a program in C to extract a substring from a given string
#include <stdio.h>

int main()
{
    char str[30], substr[30];
    int position, len, i;

    printf("Enter the main string: ");
    gets(str);

    printf("Enter the positionition to start extraction: ");
    scanf("%d", &position);

    printf("Enter the length of the substring: ");
    scanf("%d", &len);
    position--;
    for (i = 0; i < len; i++)
    {
        substr[i] = str[position];
        position++;
    }
    substr[i] = '\0';

    printf("The extracted substring is: %s\n", substr);

    return 0;
}