#include <stdio.h>

int main(){
    int basicSalary;

    printf("Enter basic salary : ");
    scanf("%d", &basicSalary);
    
    float hra, da;

    if(basicSalary>=1 && basicSalary<=4000){
        hra = basicSalary*0.1;
        da = basicSalary*0.5;
    }
    else if(basicSalary>=4001 && basicSalary<=8000){
        hra = basicSalary*0.2;
        da = basicSalary*0.60;
    }
    else if(basicSalary>=8001 && basicSalary<=12000){
        hra = basicSalary*0.25;
        da = basicSalary*0.70;
    }
    else if(basicSalary>12000){
        hra = basicSalary*0.3;
        da = basicSalary*0.80;
    }

    printf("Gross salary = %.2f", basicSalary+hra+da);
    return 0;
}