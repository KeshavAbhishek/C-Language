#include <stdio.h>

int main(){
    float sumAmount = 0;
    int unit = 0, unitCopy;
    int unitIncreased = 0;

    printf("\nEnter unit of electricity used : ");
    scanf("%d", &unit);

    unitCopy = unit;
    
    if(unit > 300){
        unitIncreased = unit-300;
        sumAmount += unitIncreased*2;
        unit = unit-unitIncreased;
    }
    if(unit>=201 && unit <= 300){
        unitIncreased = unit-200;
        sumAmount += unitIncreased*1.5;
        unit = unit-unitIncreased;
    }
    if(unit<=200){
        sumAmount += unit*1;
    }

    printf("\nTotal Unit : %d\nTotal bill amount = %.2f", unitCopy, sumAmount);
    return 0;
}