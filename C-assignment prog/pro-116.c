//Write a program in C to find the number of times a given word 'is' appears in the given string

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int count = 0;

    
    printf("Enter a string: ");
    gets(str);  

    for (int i = 0; i < strlen(str) - 1; i++) { 
        if (str[i] == 'i' && str[i + 1] == 's'&&str[i-1]==' '&&str[i+2]==' ') {
            count++;
        }
    }

    printf("The word is appears %d times.\n", count);

    return 0;
}
