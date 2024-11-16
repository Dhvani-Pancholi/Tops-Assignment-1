// Accept number of students from user. I need to give 5 apples to each  student. How many apples are required?


#include<stdio.h>

void main(){

    int student;
    printf("Enter Number of students:");  
    scanf("%d",&student);
    int apples = student*5;
    printf("Required apple is: %d\n",apples);
}