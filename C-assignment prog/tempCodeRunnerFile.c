// WAP to reverse a string and check that the string is palindromedrome or not

#include <stdio.h>
#include <string.h>
char str[50];
int palindrome()
{
    int length, palindrome = 1;
    length = strlen(str);
    length = length - 1;
    for (int i = 0; str[i] < str[length]; i++)
    {
        if (str[i] != str[length])
        {
            palindrome = 0;
        }
    }

    if (palindrome == 1)
    {
        printf("\nString is palindrome.");
    }
    else
    {
        printf("\nString is not palindrome");
    }
}

int main()
{
    printf("Enter String : ");
    gets(str);
    palindrome();
    return 0;
}