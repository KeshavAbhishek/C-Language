#include <stdio.h>
#include <time.h>

int main(){
    // Three types of loops

    // while (/* condition */)
    // {
    //     /* code */
    // }
    
    // do
    // {
    //     /* code */
    // } while (/* condition */);

    // for (int i = 0; i < count; i++)
    // {
    //     /* code */
    // }

    char value = '*';

    int row = 0;
    int column;

    printf("Using while loop.\n");
    while (row < 4)
    {
        column = 0;
        while (column < 4)
        {
            if(column==0){
                printf("%c", value);
            }
            else{
                printf("%5c", value);
            }
            column++;
        }
        printf("\n");
        row++;
        
    }
    printf("\nUsing for loop.\n");
    for (int i = 0; i < 4; i++)
    {
        for (int k = 0; k < 4; k++)
        {
            if(k==0){
                printf("%c", value);
            }
            else{
                printf("%5c", value);
            }
        }
        printf("\n");
        
    }

    return 0;
}