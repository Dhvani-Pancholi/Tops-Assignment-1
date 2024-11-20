// find the area of a rectangular prism formula : A=2(wl+hl+hw)

#include <stdio.h>

void main()
{
    float width, length, height;
    printf("Enter the value of width: ");
    scanf("%f", &width);
    printf("Enter the value of length: ");
    scanf("%f", &length);
    printf("Enter the value of height: ");
    scanf("%f", &height);

    float area;

    area = 2 * (width * length + height * length + height * width);
    printf("The area of the rectangular prism is: %.2f\n", area);
}