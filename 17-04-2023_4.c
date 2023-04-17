/*
WAP to print the following pattern using indirect recursion.
                
                * * * * * * * * * *
                # # # # # # # # # #

Print the row of star and the row of the hash using two separate functions.
Establish indirect recursion between these two separate functions.

*/

#include <stdio.h>

int i = 0;
int count = 0;

void hashPrinter();

void starPrinter(){
    if(count>10){
        if(count>=15){
            return 0;
        }
        printf("# ");
        hashPrinter();
        count += 1;
    }
    else{
        printf("* ");
        count += 1;
        if(count==10){
            printf("\n");
        }
        hashPrinter();
    }
};

void hashPrinter(){
    if(count<=10){
        printf("* ");
        count += 1;
        if(count==10){
            printf("\n");
        }
        starPrinter();
    }
    else{
        printf("# ");
        count += 1;
        starPrinter();
    }
};

int main(){
    starPrinter();
    return 0;
}