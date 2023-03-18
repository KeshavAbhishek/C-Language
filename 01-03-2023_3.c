#include <stdio.h>

int main()
{
    int number;
    printf("\nEnter a number : ");
    scanf("%d", &number);
    if (number > 0)
    {
        printf("You entered +ve number.");
        if (number % 5 == 0)
        {
            printf("\nEntered number is multiple of 5.");
        }
        else
        {
            printf("\nEntered number is not a multiple of 5.");
        }
    }
    else
    {
        printf("You entered -ve number.");
    }
    printf("\n");

    return 0;
}