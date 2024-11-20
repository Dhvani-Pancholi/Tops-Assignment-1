// C Program to Read Integer and Print First Three Powers (N^1, N^2, N^3)

#include <stdio.h>

int main() {
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    printf("first 3 power of  %d are %d , %d , %d", n,n, n * n, n * n * n);

    return 0;
}
