// Write a program make a summation of given number (E.g., 1523 Ans: -11) 


#include <stdio.h>
void main()
{
    int n,sum=0,r;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(n != 0){

        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    printf("Summation of digits is: %d", sum);
    
}