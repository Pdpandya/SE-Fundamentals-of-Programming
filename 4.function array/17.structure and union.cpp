#include <stdio.h>

// Define a structure representing a person
struct Person {
    char name[20];
    int age;
    float salary;
};

// Define a union representing various data types
union Data {
    int i;
    float f;
    char c;
};

int main() {
    // Example of using a structure
    struct Person person1; // Declare a structure variable
    printf("Enter name: ");
    scanf("%s", person1.name);
    printf("Enter age: ");
    scanf("%d", &person1.age);
    printf("Enter salary: ");
    scanf("%f", &person1.salary);
    printf("\nDetails of Person:\n");
    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    printf("Salary: %.2f\n", person1.salary);

    // Example of using a union
    union Data data; // Declare a union variable
    printf("\nEnter an integer: ");
    scanf("%d", &data.i);
    printf("Integer value: %d\n", data.i);
    printf("Enter a floating point number: ");
    scanf("%f", &data.f);
    printf("Floating point value: %.2f\n", data.f);
    printf("Enter a character: ");
    scanf(" %c", &data.c);
    printf("Character value: %c\n", data.c);

    return 0;
}

