// Write a program in C to read any Month Number in integer and display
// the number of days for this month

#include <stdio.h>
void main()
{
    int month;
    printf("Enter the month number (1-12):");
    scanf("%d", &month);

    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("this month have 31 days");
        break;

    case 2:
        printf("This month have 28/29 days ");
        break;

    case 4:
    case 6:
    case 9:
    case 11:
        printf("this month have 30 days");
        break;
    default:
        printf("Enter value is not valid");
        break;
    }
}