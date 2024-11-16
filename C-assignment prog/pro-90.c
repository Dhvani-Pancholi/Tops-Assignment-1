// WAP to find factorial using recursion

#include <stdio.h>

int fact(int num)
{
    if (num > 1)
    {
        num *= fact(num - 1);
        printf("\n%d", num);
        return num;
    }
    else
    {
        return 1;
    }
}

void main()
{
    int num;

    printf("Enter your number: ");
    scanf("%d", &num);

    printf("Factorial of given number is: %d\n", fact(num));
}