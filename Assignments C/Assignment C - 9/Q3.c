// 3. WAP to Demonstrate the Dynamic Memory Allocation for Structure.

#include <stdio.h>
#include <stdlib.h>

struct person {
    char name[20];
    int age;
};

int main() {
    // Declare a pointer to a person struct
    struct person *p;

    // Dynamically allocate memory for the person struct
    p = (struct person*) malloc(sizeof(struct person));

    printf("Enter the person's name: ");
    scanf("%s", p[0].name);
    printf("Enter the person's age: ");
    scanf("%d", &p[0].age);

    printf("\nName: %s", p[0].name);
    printf("\nAge: %d", p[0].age);

    return 0;
}