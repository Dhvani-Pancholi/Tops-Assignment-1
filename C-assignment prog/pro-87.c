// Write a program to find out the max number from given array using function

#include <stdio.h>

int maxNumber();

int main()
{
    int store_value = maxNumber();
    printf("Max number is: %d", store_value);

    return 0;
}

int maxNumber()
{

    int a[3], i, max = 0;

    for (i = 0; i < 3; i++)
    {
        printf("Enter the number of elements in the array: ");
        scanf("%d", &a[i]);
        if (a[i] > max)
        {
            max = a[i];
        }
    }

    return max;
}
