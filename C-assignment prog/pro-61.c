// WAP to accept 5 numbers from user and display all numbers

#include <stdio.h>
void main()
{
    int n[5];
    for (int i = 0; i <= 4; i++)
    {
        printf("Enter number: ");
        scanf("%d", &n[i]);
    }
    for (int i = 0; i <= 4; i++)
    {
        printf("%d\n", n[i]);
    }
}
