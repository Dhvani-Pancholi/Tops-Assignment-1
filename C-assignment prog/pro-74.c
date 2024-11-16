// Calculate sum of 10 numbers using of while loop 

#include <stdio.h>

int main() {
    int i=0,num,sum=0;

    printf("Enter a numbers:\n");

    while (i < 10) {
        scanf("%d", &num);
        sum += num; 
        i++; 
    }

    printf("The sum of the 10 numbers is: %d\n", sum);

    return 0;
}
