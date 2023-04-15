#include <stdio.h>

int main(){
    int a = 20, *ptr1;
    ptr1 = &a;
    int b = 40, *ptr2;
    ptr2 = &b;

    printf("PTR 1 %d\nPTR 2 %d\nPTR2-PTR1 %d", ptr1, ptr2, ptr1-ptr2);
    return 0;
}