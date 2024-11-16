// Calculate the Sum of Natural Numbers Using the While Loop

#include <stdio.h>

int main()
{
    int n, sum = 0, i = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Please enter a positive integer.\n");
    }
    else
    {
        while (i <= n)
        {
            sum += i;
            i++;
        }

        printf("The sum of natural numbers up to %d is: %d\n", n, sum);
    }

    return 0;
}
