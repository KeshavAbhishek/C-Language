#include <stdio.h>

int main(){
    int score;
    int grade;
    printf("Enter score : ");
    scanf("%d", &score);
    grade = score/10;
    switch (grade)
    {
    case 3:
        printf("C-");
        break;
    case 4:
        printf("C+");
        break;
    case 5:
        printf("B");
        break;
    case 6:
        printf("B+");
        break;
    case 7:
        printf("A");
        break;
    case 8:
        printf("A+");
        break;
    }
    return 0;
}