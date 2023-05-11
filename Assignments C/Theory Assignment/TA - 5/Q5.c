#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Person {
    char name[50];
    struct Date birthdate;
};

int main() {
    struct Person p1 = {"John Smith", {15, 5, 1985}};
    
    printf("Name: %s\n", p1.name);
    printf("Birthdate: %d/%d/%d\n", p1.birthdate.day, p1.birthdate.month, p1.birthdate.year);

    return 0;
}