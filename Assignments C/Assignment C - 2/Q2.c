// 2. WAP to print total number of days in a month using switch case.
#include <stdio.h>

int main(){
    int nDay;
    printf("1. January\n2. February\n3. March\n4. April\n5. May\n6. June\n7. July\n8. August\n9. September\n10. October\n11. November\n12. December\n\nEnter choice : ");
    scanf("%d", &nDay);

    switch (nDay)
    {
    case 1:
        printf("Number of days : 31");
        break;
    case 2:
        printf("Number of days : 28");
        break;
    case 3:
        printf("Number of days : 31");
        break;
    case 4:
        printf("Number of days : 30");
        break;
    case 5:
        printf("Number of days : 31");
        break;
    case 6:
        printf("Number of days : 30");
        break;
    case 7:
        printf("Number of days : 31");
        break;
    case 8:
        printf("Number of days : 31");
        break;
    case 9:
        printf("Number of days : 30");
        break;
    case 10:
        printf("Number of days : 31");
        break;
    case 11:
        printf("Number of days : 30");
        break;
    case 12:
        printf("Number of days : 31");
        break;
    }
    return 0;
}

/*
Output

1. January
2. February
3. March
4. April
5. May
6. June
7. July
8. August
9. September
10. October
11. November
12. December

Enter choice : 2
Number of days : 28
*/