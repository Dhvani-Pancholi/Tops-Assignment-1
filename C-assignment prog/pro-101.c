// Perform 2D matrix array

#include <stdio.h>
int main()
{
    int matrix[2][2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter Element : ");
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {

            printf("%d\t", matrix[i][j]);
            if (j == 1)
            {
                printf("\n");
            }
        }
    }
    return 0;
}