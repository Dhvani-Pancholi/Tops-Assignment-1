// Convert kilometers into meters

#include <stdio.h>

int main() {
    float kilometers, meters;

    printf("Enter kilometers: ");
    scanf("%f", &kilometers);

    meters = kilometers * 1000;
    printf("kilometers into meter is %.2f\n", meters);

    return 0;
}

