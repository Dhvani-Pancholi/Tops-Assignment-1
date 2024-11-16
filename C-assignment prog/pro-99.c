//WAP to accept 5 students name and store it in array 
#include<stdio.h>
int main()
{  
    char num[5][10];

    for (int i = 0; i < 5; i++)
    {
            printf("Enter name %d: ",i+1);
            gets(num[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("\nStudent %d name is : %s",i+1,num[i]);
    } 
    
return 0;
}