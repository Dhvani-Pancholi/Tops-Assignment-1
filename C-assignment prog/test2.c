// Write a program which stores 3 person's following info, 
// name, age, city without using more than one variable to sotre person info. Now print info of those people in using another function.

#include <stdio.h>
#include <string.h>

struct Person {
    char name[20];
    int age;
    char city[20];
};

void PersonInfo(struct Person p1) {
    printf("Name: %s\n", p1.name);
    printf("Age: %d\n", p1.age);
    printf("City: %s\n", p1.city);
    printf("=======================\n");
}
int main() {
    
    struct Person people[3];

    for (int i = 0; i < 3; i++) {
        printf("Enter details of person: %d\n", i + 1);
        printf("Name: ");
        scanf("%s", people[i].name);
        printf("Age: ");
        scanf("%d", &people[i].age);
        printf("City: ");
        scanf("%s", people[i].city);
        printf("\n");
    }

    for (int i = 0; i < 3; i++) {
        printf("Person %d:\n", i + 1);
        PersonInfo(people[i]);
    }
    
    return 0;
}
