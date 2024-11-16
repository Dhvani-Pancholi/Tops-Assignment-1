// Write a program to find out the max from given number (E.g., No: -1562 Max number is 6)

#include <stdio.h>
void main()
{
    int n, x, max = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n != 0)
    {
        x = n % 10;
        if (x > max)
        {
            max = x;
        }
        n = n / 10;
    }
    printf("Max number is : %d", max);
}
