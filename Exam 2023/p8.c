/*

* * * * * * *
  * * * * *
    * * *
      *

*/

#include <stdio.h>

int main(){
    int nstar = 7;
    int space = 0;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }
        
        space += 2;

        for (int k = 0; k < nstar; k++)
        {
            printf("* ");
        }
        nstar -= 2;
        printf("\n");
        
    }
    
    return 0;
}