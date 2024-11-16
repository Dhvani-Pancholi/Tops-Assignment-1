// Write a program in C to find the largest and smallest words in a string.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[100], largest_word[100], smallest_word[100], word[100];

    int max_count = 0, min_count = 20;
    int j = 0;
    int len;

    fflush(stdin);
    printf("Enter string :");
    gets(str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (isspace(str[i]))
        {
            word[j] = '\0';
            len = strlen(word);
            if (len >= max_count)
            {
                max_count = len;
                strcpy(largest_word, word);
            }
            if (len <= min_count)
            {
                min_count = len;
                strcpy(smallest_word, word);
            }
            j = 0;
        }
        else
        {
            word[j] = str[i];
            j++;
        }
    }
    word[j] = '\0';
    len = strlen(word);
    if (len >= max_count)
    {
        max_count = len;
        strcpy(largest_word, word);
    }
    if (len <= min_count)
    {
        min_count = len;
        strcpy(smallest_word, word);
    }
    printf("Largest Word: %s\n", largest_word);
    printf("Smallest Word:  %s\n", smallest_word);
    return 0;
}