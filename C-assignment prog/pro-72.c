// calculate the Factorial of a Given Number using while loop

#include <stdio.h>
void main()
{
    int n, i=1, fact = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    while (i<=n)
    {
        fact = fact * i;
        i++;
    }
    printf("Factorial of %d = %d", n, fact);
}