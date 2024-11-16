// Program of Armstrong Number in C Using For Loop & While Loop

#include <stdio.h>
void main()
{
    int n, i, temp, r, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;

    while (n > 0)
    {
        r = n % 10;
        sum = sum + (r * r * r);
        n = n / 10;
    }

    // for (int i = n; i != 0; i /= 10) {
    //     r = i % 10;
    //     sum += (r * r * r);
    // }

    if (temp == sum)
    {
        printf("Armstrong number");
    }
    else
    {
        printf("Not an Armstrong number");
    }
}
