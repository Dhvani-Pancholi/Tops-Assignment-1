// find the area of a rectangular prism formula : A=2(wl+hl+hw)

#include<stdio.h>

void main(){
    float width = 5.0;  
    float length = 3.3;  
    float height = 4.8; 
    float area;

    area = 2 * (width * length + height * length + height * width);
    printf("The area of the rectangular prism is: %.2f\n", area);
}