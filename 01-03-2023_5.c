#include <stdio.h>

int main(){
    int salesValue=0;

    printf("Enter sales value : ");
    scanf("%d", &salesValue);

    if(salesValue<=1000){
        printf("Commission not applied.");
    }
    else if(salesValue >1000 && salesValue<=2000){
        printf("Commission is (%d X 0.05) Rs. %f", salesValue, salesValue*0.05);
    }
    else if(salesValue >2000 && salesValue<=5000){
        printf("Commission is (%d X 0.08) Rs. %f", salesValue, salesValue*0.08);
    }
    else{
        printf("Commission is (%d X 0.10) Rs. %f", salesValue, salesValue*0.10);
    };
    return 0;
}