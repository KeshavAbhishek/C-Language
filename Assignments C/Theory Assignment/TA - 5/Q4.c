#include <stdio.h>

struct Person {
    char name[50];
    int age;
    float height;
};

int main() {
    // Declare and initialize a struct variable
    struct Person p1 = {"John Smith", 35, 1.8};

    // Access the members of the struct variable
    printf("Name: %s\n", p1.name);
    printf("Age: %d\n", p1.age);
    printf("Height: %.2f\n", p1.height);

    return 0;
}