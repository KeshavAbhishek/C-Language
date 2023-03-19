/*

4. Determine the most economical quantity to be stocked for each
product that a manufacturing company has in its inventory: This
quantity called economic order quantity (EOQ) is calculated as
follows: EOQ=2RS/I, where R= Total yearly production
requirement, S= set up cost per order , I= inventory carrying cost
per unit. 

*/

#include <stdio.h>

int main(){
    float EOQ, R, S, I;
    printf("Total yearly production requirement (R) = ");
    scanf("%f", &R);
    printf("Set-up cost per order (S) = ");
    scanf("%f", &S);
    printf("Inventory carrying cost per unit (I) = ");
    scanf("%f", &I);
    EOQ = (2*R*S)/I;
    printf("\nEconomic Order Quantity = %f", EOQ);
    return 0;
}