// 1. Write a program in C to print all the alphabets using a pointer.

#include <stdio.h>

int main() {
    char *alphabet = "abcdefghijklmnopqrstuvwxyz";
    
    for(int i = 0; i < 26; i++) {
        printf("%c ", *(alphabet + i));
    }
    
    return 0;
}