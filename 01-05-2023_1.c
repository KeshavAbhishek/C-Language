// Write a program in C to print all the alphabets using a pointer.

#include <stdio.h>
#include <string.h>

int main(){
    char letter='A';
    char * ptr;

    *ptr = letter;

    for (int i = 0; i < 26; i++)
    {
        printf("%c\n", *ptr);
        ptr++;
    }

    return 0;
}