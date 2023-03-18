#include <stdio.h>

int main(){
    int stars, n;
    printf("Enter number of rows : ");
    scanf("%d", &stars);
    n = stars;
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < n-stars; k++)
        {
            printf(" ");
        }
    
        for (int j = 0; j < stars; j++)
        {
            printf("* ");
        }
        stars-=2;
        printf("\n");
    }

    printf("\n");

    int row = 1;
    for (int i = 11; i >= 1; i=i-2)
    {
        row = row + 1;
        for (int k = 0; k < i; k++)
        {
            printf("*");
        }
        printf("\n");
        for (int j = 0; j < row-1; j++)
        {
            printf(" ");
        }
        
    }

    return 0;
}
// 307008223929