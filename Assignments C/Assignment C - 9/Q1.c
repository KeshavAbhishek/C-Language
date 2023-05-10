// Q1. WAP to Store Information of 3 students and Display it Using Structure.

#include <stdio.h>

struct Student
{
    char Name[100];
    char RegNo[10];
    char Branch[100];
};

int main(){
    struct Student s[3];

    for (int i = 0; i < 3; i++)
    {
        printf("Enter name : ");
        scanf("%s", &s[i].Name);

        printf("Enter Registration No. : ");
        scanf("%s", &s[i].RegNo);

        printf("Enter Branch : ");
        scanf("%s", &s[i].Branch);
        printf("\n");
    }

    for (int i = 0; i < 3; i++)
    {
        printf("%s\n%s\n%s\n\n", s[i].Name, s[i].RegNo, s[i].Branch);
    }

    return 0;
}