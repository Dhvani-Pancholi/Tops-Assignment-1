// WAP to input the week number and print week day

#include <stdio.h>
void main()
{

    int week_num;
    printf("Enter week number (1-7): ");
    scanf("%d", &week_num);

    switch (week_num)
    {
    case 1:
        printf("Monday");
        break;

    case 2:
        printf("Tuesday");
        break;

    case 3:
        printf("Wednesday");
        break;

    case 4:
        printf("Thursday");
        break;

    case 5:
        printf("Friday");
        break;

    case 6:
        printf("Saturday");
        break;

    case 7:
        printf("Sunday");
        break;

    default:
        printf("Invalid week number");
        break;
    }
}
