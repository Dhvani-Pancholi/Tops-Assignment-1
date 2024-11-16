// WAP to accept the height of a person in centimeters and categorize the person according to their height

#include<stdio.h>
void main() {
    int height; 

    printf("Enter the height of person in centimeters:");
    scanf("%d", &height);

    if (height < 130){
        printf("Person is short");
    }
    else if(height >= 130 &&  height <= 180){;
        printf("person is average");
    }
    else {
        printf("Person is tall");
    }

}

