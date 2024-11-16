// WAP to show
// i. Monday to Sunday using switch case
// ii.Vowel or Consonant using switch case

// i. Monday to Sunday using switch case
#include <stdio.h>
void main()
{
    int day;
    printf("Enter day number (1-7):");
    scanf("%d", &day);

    switch (day)
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
        printf("Invalid number");
        break;
    }
    
// ii.Vowel or Consonant using switch case
    char vowel;
    printf("Enter a character: ");
    scanf(" %c", &vowel);

    switch (vowel)
    {
    case 'a':
    case 'A':
        printf("Vowel");
        break;
    case 'e':
    case 'E':
        printf("Vowel");
        break;
    case 'i':
    case 'I':
        printf("Vowel");
        break;
    case 'o':
    case 'O':
        printf("Vowel");
        break;
    case 'u':
    case 'U':
        printf("Vowel");
        break;
    default:
        printf("Consonant");
        break;
    }
}

