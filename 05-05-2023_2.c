#include<stdio.h>
int main()
{
    struct student
    {
        char name[20];
        int roll;
        char branch[20];
        float cgpa;
    };
    //Assigning value to the structure
    struct student stu1={"Revansh",357,"CSE",9.8};
    struct student stu2={"Sukanya",350,"ECE",9.6};
    struct student stu3={"Patrik",567,"Mech",9.5};
    //Accessing Structure Data/Information
    printf("\n Name of the student: %s",stu2.name);
    printf("\n  Roll of the student: %d",stu2.roll);
    printf("\n   Branch of the student: %s",stu2.branch);
    printf("\n    cgpa of the student: %.1f\n",stu2.cgpa);

    printf("\n Name of the student: %s",stu1.name);
    printf("\n  Roll of the student: %d",stu1.roll);
    printf("\n   Branch of the student: %s",stu1.branch);
    printf("\n    cgpa of the student: %.1f\n",stu1.cgpa);

    printf("\n Name of the student: %s",stu3.name);
    printf("\n  Roll of the student: %d",stu3.roll);
    printf("\n   Branch of the student: %s",stu3.branch);
    printf("\n    cgpa of the student: %.1f\n",stu3.cgpa);
}