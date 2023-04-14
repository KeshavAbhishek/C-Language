// SUM [1,2,3,4,5,6,7,8,9,10] using recusion.

#include <stdio.h>

int sumBack(int n){
    if(n==1){
        return 1;
    }
    else{
        return n + sumBack(n-1);
    }
}

int main(){
    printf("%d", sumBack(10));
    return 0;
}