#include <stdio.h>

struct student
{
    char Name[1000];
    int roll;
    struct performance
    {
        float cgpa;
        int projScore;
        char award[1000];
    }p;
    
}s;


int main(){
    struct student s={"Raj", 5, {9.8, 95, "Gold"}};
    printf("Name : %s\nRoll : %d\nCGPA : %f\nProject Score : %d\nAward : %s", s.Name,s.roll,s.p.cgpa,s.p.projScore,s.p.award);
    
    return 0;
}