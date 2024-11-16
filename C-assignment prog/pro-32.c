// Accept 2 numbers and find out its sum check it size

void main() {
    float a; 
    float b;
    float sum;

    printf("Enter first number:");
    scanf("%f", &a);

    printf("Enter second number:");
    scanf("%f", &b);

    sum = a + b ;
    printf("Sum of a and b is: %.2f\n",sum);
    printf("Size of a : %d\n",sizeof(a));
    printf("Size of b : %d\n",sizeof(b));
    printf("Size of sum : %d\n",sizeof(sum));
    
}