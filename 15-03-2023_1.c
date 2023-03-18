/*

*******
 *****
  ***
   *

*/

#include <stdio.h>

int main(){
    int stars;
    int spaces = 0;
    int rows = 0;

    printf("Enter the number of stars you want to see in 1st row : ");
    scanf("%d", &stars);
    if(stars%2!=0){

        while (stars>=1)
        {
            for (int x = 0; x < spaces; x++)
            {
                printf(" ");
            }

            for (int k = 0; k < stars; k++)
            {
                printf("*");
            }
            
            printf("\n");
            spaces+=1;
            stars -= 2;
            rows++;
        }
        printf("\nNo. of rows = %d", rows);
    }
    else{
        printf("Enter an odd number.");
    }
    
    return 0;
}