#include <stdio.h>

int main(){
    int i=0;

    while(i<=20){
        if(i>=10){
            printf("%d\n", i);
        }
        i++;
    }

    // WAP to print first n natural number using "for" loop

    int naturalNumber;
    printf("\nHow many numbers you want to print : ");
    scanf("%d", &naturalNumber);

    for (int i = 0; i < naturalNumber; i++)
    {
        printf("%d\n", i+1);
    }
    

    return 0;
}