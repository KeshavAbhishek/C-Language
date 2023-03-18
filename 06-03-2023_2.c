#include <stdio.h>

int main(){
    printf("Enter attendance in per-cent : ");
    int perCent;
    scanf("%d", &perCent);
    
    int possible;
    possible = ("%d", perCent>75);

    switch (possible)
    {
    case 0:
        printf("Not eligible");
        break;
    case 1:
        printf("Eligible");
        break;
    
    default:
        break;
    }
    return 0;
}