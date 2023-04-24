// 3. Write a C program to input and print array elements using pointer.

#include <stdio.h>

int main(){
    int array[100]={};
    int *ptr, nElement;

    printf("Number of elements you want to input : ");
    scanf("%d", &nElement);

    for (int i = 0; i < nElement; i++)
    {
        printf("Enter value : ");
        scanf("%d", &array[i]);
    }

    ptr = array;
    
    printf("\n\n");
    for (int i = 0; i < nElement; i++)
    {
        printf("%d ", *(ptr+i));
    }
    
    return 0;
}