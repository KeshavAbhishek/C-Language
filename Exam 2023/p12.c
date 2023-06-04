#include <stdio.h>

// Structure definition for student details
struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    // Declare an array of struct Student to store information for multiple students
    // struct Student students[3];

    struct Student s1={"Rahu", 50, 75};
    struct Student s2={"Ketu", 40, 90};
    struct Student s3={"Madhav", 25, 85};

    printf("%s %d %d\n", s1.name, s1.roll, s1.marks);
    printf("%s %d %d\n", s2.name, s2.roll, s2.marks);
    printf("%s %d %d\n", s3.name, s3.roll, s3.marks);

    return 0;
}
