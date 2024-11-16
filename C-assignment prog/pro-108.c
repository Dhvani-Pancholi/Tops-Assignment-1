//Write a program in C to count the total number of words in a string.
#include<stdio.h>
int main()
{
    char str[30];
    int count_word=1;
    printf("Enter string : ");
    gets(str);

    for (int i = 0; str[i]!='\0'; i++)
    {
        if(str[i]==' ')
        {
            count_word++;
        }
    }
    printf("Total Words : %d",count_word);
return 0;
}