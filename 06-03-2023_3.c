#include <stdio.h>

int main(){
    int yoe;
    printf("Enter year of experience : ");
    scanf("%d", &yoe);

    switch (yoe)
    {
    case 2:
        printf("%d incremented to %f", 15000, 15000 + 15000.0*0.20);
        break;
    case 4:
        printf("%d incremented to %f", 25000, 25000 + 25000.0*0.25);
        break;
    case 6:
        printf("%d incremented to %f", 38000, 38000 + 38000.0*0.32);
        break;
    case 8:
        printf("%d incremented to %f", 52000, 52000 + 52000*0.35);
        break;
    case 9:
        printf("%d incremented to %f", 52000, 52000 + 52000*0.35);
        break;
    case 11:
        printf("%d incremented to %f", 63000, 63000 + 63000.0*40);
        break;
    case 13:
        printf("%d incremented to %f", 72000, 72000 + 72000.0*47);
        break;
    case 14:
        printf("%d incremented to %f", 72000, 72000 + 72000.0*47);
        break;
    default:
        printf("Not applicable.");
        break;
    }
    return 0;
}