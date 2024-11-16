// WAP to show difference between Structure and Union.

/*Structures in C is a user-defined data type available in C that allows to combining of data items of different kinds.
Structures are used to represent a record.*/

/*Union in c is a special data type available in C that allows storing different data types in the same memory location.
You can define a union with many members, but only one member can contain a value at any given time.
Unions provide an efficient way of using the same memory location for multiple purposes.  */

#include <stdio.h>

struct Student
{
    int id;
    char name[20];
    float marks;
};

union Data
{
    int intData;
    float floatData;
    char charData;
};

int main()
{

    struct Student student1 = {1, "mira", 85.5};

    union Data data1;

    data1.intData = 10;

    data1.floatData = 20.5;
    data1.charData = 'A';

    printf("Structure: Student Info\n");
    printf("ID: %d\n", student1.id);
    printf("Name: %s\n", student1.name);
    printf("Marks: %.2f\n", student1.marks);
    printf("Size of Structure: %lu bytes\n\n", sizeof(student1));

    printf("Union: Data Info\n");
    printf("Int Data: %d\n", data1.intData);
    printf("Float Data: %.2f\n", data1.floatData);
    printf("Char Data: %c\n", data1.charData);
    printf("Size of Union: %lu bytes\n", sizeof(data1));

    return 0;
}
