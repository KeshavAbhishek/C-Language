#include <stdio.h>

int main(){
    // if (/* condition */)
    // {
    //     /* code */
    // }

    int number;
    printf("\nEnter a number : ");
    scanf("%d", &number);

    if(number%2==0){
        printf("Entered number is even.\n");
    }
    else{
        printf("Entered number is odd.\n");
    }

    return 0;
}