// 3. WAP to Demonstrate the Dynamic Memory Allocation for Structure.

#include <stdio.h>
#include <stdlib.h>

// Define the structure
struct person {
    char name[20];
    int age;
};

int main() {
    // Declare a pointer to a person struct
    struct person *p;

    // Dynamically allocate memory for the person struct
    p = (struct person*) malloc(sizeof(struct person));

    // Check if memory allocation was successful
    if (p == NULL) {
        printf("Memory allocation failed.");
        return 1;
    }

    // Populate the person struct
    printf("Enter the person's name: ");
    scanf("%s", p->name);
    printf("Enter the person's age: ");
    scanf("%d", &p->age);

    // Display the person's information
    printf("\nName: %s", p->name);
    printf("\nAge: %d", p->age);

    // Free the dynamically allocated memory
    free(p);

    return 0;
}
