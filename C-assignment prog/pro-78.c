// patterns

#include <stdio.h>
// int SIZE = 10;
// void printSpiralMatrix(int matrix[SIZE][SIZE]) {
//     for (int i = 0; i < SIZE; i++) {
//         for (int j = 0; j < SIZE; j++) {
//             printf("%3d ", matrix[i][j]);
//         }
//         printf("\n");
//     }
// }

// void generateSpiralMatrix(int matrix[SIZE][SIZE]) {
//     int left = 0, right = SIZE - 1, top = 0, bottom = SIZE - 1;
//     int num = 1;

//     while (left <= right && top <= bottom) {
//         // Fill top row
//         for (int i = left; i <= right; i++) {
//             matrix[top][i] = num++;
//         }
//         top++;

//         // Fill right column
//         for (int i = top; i <= bottom; i++) {
//             matrix[i][right] = num++;
//         }
//         right--;

//         // Fill bottom row
//         if (top <= bottom) {
//             for (int i = right; i >= left; i--) {
//                 matrix[bottom][i] = num++;
//             }
//             bottom--;
//         }

//         // Fill left column
//         if (left <= right) {
//             for (int i = bottom; i >= top; i--) {
//                 matrix[i][left] = num++;
//             }
//             left++;
//         }
//     }
// }

int main()
{
    
    // 1
    // 1 0
    // 1 0 1
    // 1 0 1 0
    // 1 0 1 0 1

    int i,j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
           printf("%d ",j%2);
        }
        printf("\n");
    }

    // A
    // B C
    // D E F
    // G H I J
    // K L M N O

    // int i,j,k=65;
    // for (i = 1; i <= 5; i++)
    // {
    //     for (j = 1; j <=i ; j++)
    //     {
    //        printf("%c ",k );
    //        k++;
    //     }
    //     printf("\n");
    // }

    //     *
    //    ***
    //   *****
    //  *******
    // *********

    // int i, j, k = 0, counter = 1;
    // for (i = 1; i <= 5; i++)
    // {
    //     for (k = 4; k >= i; k--)
    //     {
    //         printf(" ");
    //     }

    //     for (j = 1; j < (i + i); j++)
    //     {
    //         printf("* ");
    //     }
    //     printf("\n");
    //     counter++;
    // }

    // 1
    // 23
    // 456
    // 78910
    // 1112131415

    // int i, j, counter = 1;

    // for (i = 0; i < 5; i++)
    // {
    //     for (j = 0; j <= i; j++)
    //     {
    //         printf("%d ", counter);
    //         counter++;
    //     }
    //     printf("\n");
    // }

    // A
    // A B
    // A B C
    // A B C D
    // A B C D E
    // int i, j;

    // for (i = 1; i <= 5; i++)
    // {
    //     for (j = 1; j <= i; j++)
    //     {
    //         printf("%C ", j+64);

    //     }
    //     printf("\n");
    // }

    // *
    // **
    // ***
    // ****
    // *****
    // ******
    // *****
    // ****
    // ***
    // **
    // *

    // int i,j;
    //     for (i = 1; i <= 6; i++)
    //     {
    //         for (j = 1; j <=i ; j++)
    //         {
    //            printf("* ");

    //         }
    //         printf("\n");
    //     }
    //     for (i = 1; i <= 5; i++)
    //     {
    //         for (j = 5; j >= i; j--)
    //         {
    //             printf("* ");

    //         }
    //         printf("\n");
    //     }

    // 1 2 3 4 5 6 7 8 9 10
    // 36 37 38 39 40 41 42 43 44 11
    // 35 64 65 66 67 68 69 70 45 12
    // 34 63 84 85 86 87 88 71 46 13
    // 33 62 83 96 97 98 89 72 47 14
    // 32 61 82 95 100 99 90 73 48 15
    // 31 60 81 94 93 92 91 74 49 16
    // 30 59 80 79 78 77 76 75 50 17
    // 29 58 57 56 55 54 53 52 51 18
    // 28 27 26 25 24 23 22 21 20 19

//    int matrix[SIZE][SIZE];

//     generateSpiralMatrix(matrix);
//     printSpiralMatrix(matrix);

//     return 0;

}
