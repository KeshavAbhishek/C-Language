#include <stdio.h>

int main(){
    int a=0, b=1, i=0, n, c;
    printf("How many numbers you want to print : ");
    scanf("%d", &n);
    printf("\nSeries :\n");
    do
    {
        printf("%d ", a);
        c = a+b;
        a = b;
        b = c;
        i++;
    } while (i < n);
    
    return 0;
}