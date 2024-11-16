// Accept 5 numbers from user and find those numbers factorials

#include <stdio.h>

void main()
{
    int num[5], i;
    printf("Enter 5 numbers: ");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &num[i]);
    }
    for (i = 0; i < 5; i++)
    {
        int fact = 1;
        for (int j = 1; j <= num[i]; j++)
        {
            fact *= j;
        }

        printf("Factorial of %d is %d\n", num[i], fact);
    }
}
