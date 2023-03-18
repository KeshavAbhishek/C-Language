#include <stdio.h>

int main(){
    int array[10], i ;

    for (i = 0; i < 10; i++)
    {
        printf("Enter value : ");
        scanf("%d", &array[i]);
    }

    printf("\n");

    for (int i = 0; i < 10; i++)
    {
        if(array[i]==0){
            printf("Value at index %d is %d\n", i, array[i]);
        }
    }
    return 0;
}