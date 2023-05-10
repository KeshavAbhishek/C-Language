// 2. WAP to Add Two Distances (in inch-feet system) using Structures.

#include <stdio.h>

struct Distance
{
    int feet;
    int inch;
};


int main(){
    struct Distance d1, d2;

    d1.feet = 12;
    d1.inch = 12;
    
    d2.feet = 12;
    d2.inch = 12;

    int feet = d1.feet+d2.feet, inch = d1.inch+d2.inch;

    if(inch>=12){
        feet += (inch/12);
        inch = inch%12;
    }

    printf("Total\n\nFeet : %d\nInch : %d", feet, inch);

    return 0;
}