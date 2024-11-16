// Write a program in C to find the maximum number of characters in a string

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int maxCount = 0;
    char maxChar;

    printf("Enter a string: ");
    gets(str);

    for (int i = 0; i < strlen(str); i++) {
        int count = 0;

        
        for (int j = 0; j < strlen(str); j++) {
            if (str[i] == str[j]) {
                count++;
            }
        }

        if (count > maxCount) {
            maxCount = count;
            maxChar = str[i];
        }
    }

    printf("Max number of character is %c\n", maxChar, maxCount);

    return 0;
}