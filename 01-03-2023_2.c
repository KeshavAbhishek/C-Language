#include <stdio.h>

int main(){
    
    int marks;
    printf("Enter marks : ");
    scanf("%d", &marks);
    if(marks>=50){
        printf("You passed the examination.");
    };

    int mark;
    printf("\n\nEnter marks : ");
    scanf("%d", &mark);
    if(mark>=50){
        printf("You passed the examination.");
    }
    else{
        printf("You failed the exam.");
    };

    return 0;
}