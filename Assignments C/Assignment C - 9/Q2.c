// 2. WAP to Add Two Distances (in inch-feet system) using Structures.

#include <stdio.h>

struct Distance
{
    int feet;
    int inch;
};


int main(){
    struct Distance d[2];

    for (int i = 0; i < 2; i++)
    {
        printf("Enter feet : ");
        scanf("%d", &d[i].feet);
        
        printf("Enter inch : ");
        scanf("%d", &d[i].inch);

        printf("\n");
    }
    
    int feet1 = d[0].feet, inch1 = d[0].inch;

    int feet2 = d[1].feet, inch2 = d[1].inch;

    int feet = feet1+feet2, inch = inch1+inch2;

    if(inch>=12){
        feet += (inch/12);
        inch = inch%12;
    }

    printf("Total\n\nFeet : %d\nInch : %d", feet, inch);

    return 0;
}