// Find the Character Is Vowel or Not


#include<stdio.h>
void main()
{
    char ch;
    printf("Enter Character:");
    scanf("%c", &ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        printf("%c is a Vowel.", ch);
    }

    else
    {
        printf("%c is a not a Vowel.", ch);
    }
}