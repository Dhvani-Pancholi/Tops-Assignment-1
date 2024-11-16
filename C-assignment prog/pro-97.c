// WAP to perform Palindrome number using for loop and function

#include <stdio.h>

int palindrome(int num)
{
    int reversed = 0, original = num, rem;

    for (int i = 0; num != 0; num /= 10)
    {
        rem = num % 10;
        reversed = reversed * 10 + rem;
    }

    return original == reversed;
}

int main()
{
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);

    if (palindrome(number))
    {
        printf("%d is a palindrome\n", number);
    }
    else
    {
        printf("%d is not a palindrome\n",number);
    }

    return 0;
}