// WAP to print table up to given numbers

#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Table of %d:\n", n);
    for (int i = 1; i <= 10; i++){
        printf("%d * %d = %d\n", n, i, n * i);
    }
     return 0;
}