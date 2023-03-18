/*
5. Find the largest number among three numbers.
*/


#include <stdio.h>

int main(){
    int n1, n2, n3, max;
    printf("Enter three numbers : ");
    scanf("%d %d %d", &n1, &n2, &n3);

    max = n1;
    if(n2>max){
        max=n2;
    }
    else if(n3>max){
        max=n3;
    }

    printf("\nLargest number among three is : %d", max);
    return 0;
}