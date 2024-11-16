// Accept marks from user and check pass or fail

#include <stdio.h>
void main()
{
    int marks;

    printf("Enter mark of student:");
    scanf("%d", &marks);

    if (marks >= 50)
        printf("Student is pass");
    else
        printf("student is fail");
}