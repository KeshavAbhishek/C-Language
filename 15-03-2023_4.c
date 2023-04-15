#include <stdio.h>

int main(){
    int var1 = 30, *ptr;
    ptr = &var1;

    printf("PTR %u\n*PTR %u", ptr, *ptr);
    return 0;
}