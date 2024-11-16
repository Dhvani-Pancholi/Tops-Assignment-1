// Accept 2 numbers from user and swap 2 numbers with using 3rd variable 
// and without using 3rd variable


// 1.using 3rd variable 
#include<stdio.h>
int main(){
   
    int a,b,c;
    printf("Enter first number: ");
    scanf("%d",&a);

    printf("Enter second number: ");
    scanf("%d",&b);

    // using 3rd variable
    c=a;
    a=b;
    b=c;
    printf("After swapping :%d,%d\n",a,b);
    
    //without 3rd variable
    a=a+b;
    b=a-b;
    a=a-b;

    printf("Swapped value without 3rd variable is :%d,%d\n",a,b);
    return 0;
}

