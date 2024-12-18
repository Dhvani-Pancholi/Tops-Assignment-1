// Write a function that takes two parameters, doubles them, then pass it to another function that returns sum of them and return that value from first function

#include <stdio.h>

int sum(int x, int y) {
    return x + y;
}

int double_and_sum(int a, int b) {
    int a1 = a * 2;
    int a2 = b * 2;

    int result = sum(a1, a2);
    return result;

}

int main() {
    int a, b;

    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    int result = double_and_sum(a, b);
    printf("The result is: %d\n", result); 

    return 0;
}
