// WAP to reverse a string and check that the string is palindromedromedrome or not

#include <stdio.h>
#include <string.h>

char str[50];
int palindrome()
{
    int length, palindrome = 1;
    char revstr[50];

    strcpy(revstr, str);
    strrev(revstr);

   
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != revstr[i])
        {
            palindrome = 0;
        }
    }

    if (palindrome == 1)
    {
        printf("\nstring is palindrome.");
    }
    else
    {
        printf("\nstring is not palindrome.");
    }
}

int main()
{
    printf("Enter String : ");
    gets(str);
    palindrome();
    return 0;
}