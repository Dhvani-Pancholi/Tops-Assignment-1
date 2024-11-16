//Write a program in C to count the total number of alphabets, digits and special characters in a string

#include <stdio.h>

void main()
{
  char str[30];
  int alphabets = 0, digits = 0, spe_char = 0, i;

  printf("Enter string: ");
  gets(str);

  for (i = 0; str[i] != '\0'; i++)
  {
    if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
      alphabets++;
    else if (str[i]>='0' && str[i]<='9')
      digits++;
    else
      spe_char++;
  }

  printf("Number of alphabets: %d\n", alphabets);
  printf("Number of digits: %d\n", digits);
  printf("Number of special characters: %d\n", spe_char);
}