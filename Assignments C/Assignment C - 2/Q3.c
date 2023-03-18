/*
3. WAP to print the following pattern using for loop.

    1 
   2 2 
  3 3 3 
 4 4 4 4 
5 5 5 5 5
*/

#include <stdio.h>

int main(){
    int value = 1;
    for (int i = 0; i < 5; i++)
    {
        for (int k = 0; k < 5-value; k++)
        {
            printf(" ");
        }
        
        for (int j = 0; j < value; j++)
        {
            printf("%d ", value);
        }
        value++;
        printf("\n");
    }
    
    return 0;
}

/*
    1 
   2 2 
  3 3 3 
 4 4 4 4 
5 5 5 5 5
*/