// Accept 3 numbers from user using while loop and check each numbers palindrome

#include <stdio.h>
void main()
{
    int i = 0;
    int number[3], original, reversed, r;

    while (i < 3)
    {
        printf("Enter a number: ");
        scanf("%d", &number[i]);
        reversed = 0;
        original = number[i];
        while (number[i] != 0)
        {
            r = number[i] % 10;
            reversed = reversed * 10 + r;
            number[i] = number[i] / 10;
                }
        if (original == reversed)
        {
            printf("%d is a palindrome number\n", original);
        }
        else
        {
            printf("%d is not a palindrome\n", original);
        }
        i++;
    }
}
