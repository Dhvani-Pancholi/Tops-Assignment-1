// WAP to calculate swap 2 numbers with using of multiplication and division. 
#include<stdio.h>
int main(){

  int a,b;
    printf("Enter first number: ");
    scanf("%d",&a);

    printf("Enter second number: ");
    scanf("%d",&b);
    
    a=a*b;
    b=a/b;
    a=a/b;

    printf("Swapped value is :%d,%d\n",a,b);
    return 0;
}

