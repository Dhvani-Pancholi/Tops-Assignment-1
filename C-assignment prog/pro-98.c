// WAP to accept 5 numbers from user and display in reverse order using for loop and array

#include <stdio.h>
int main()
{
    int num[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter number %d : ", i + 1);
        scanf("%d", &num[i]);
    }
    int temp;
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            temp = num[i];
            num[i] = num[j];
            num[j] = temp;
        }
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", num[i]);
    }

    return 0;
}