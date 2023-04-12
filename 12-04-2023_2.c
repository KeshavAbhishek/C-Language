#include <stdio.h>

float average(float data1[], float data2[]){
    int avg1 = 0;
    int avg2 = 0;

    for (int i = 0; i < 5; i++)
    {
        avg1 += data1[i];
        avg2 += data2[i];
    }
    
    avg1 = avg1/5;
    avg2 = avg2/5;

    return avg1+avg2;
}

int main(){
    float data1[] = {10,20,30,40,50};
    float data2[] = {1,2,3,4,5};

    printf("Sum of averages = %f", average(data1, data2));
    
    return 0;
}