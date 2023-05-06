#include <stdio.h>

struct student
{
    char Name[1000];
    int roll;
    float marks;
};

void markShower(struct student s);

int main(){
    int n;

    printf("Enter number of stdents : ");
    scanf("%d", &n);

    struct student s[n];
    for (int i = 0; i < n; i++)
    {
        s[i].roll = i+1;
        printf("Enter name : ");
        scanf("%s", &s[i].Name);

        printf("Enter marks : ");
        scanf("%f", &s[i].marks);
        printf("\n");
    }

    for (int j = 0; j < n; j++)
    {
        markShower(s[j]);
    }

    return 0;
}

void markShower(struct student s){
    printf("%s\t\t%f\n", s.Name, s.marks);

}