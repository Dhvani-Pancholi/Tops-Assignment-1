// Calculate 5 numbers from user and calculate number of even and odd using of while loop

#include <stdio.h>

int main()
{
    int number, evenCount = 0, oddCount = 0, i = 0;

    while (i < 5)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &number);

        if (number % 2 == 0)
        {
            evenCount++;
        }
        else
        {
            oddCount++;
        }

        i++;
    }
    printf("Even numbers: %d\n", evenCount);
    printf("Odd numbers: %d\n", oddCount);

    return 0;
}