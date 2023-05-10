// 1. WAP to Store records in a file.

#include <stdio.h>

int main(){
    FILE * file;

    file = fopen("text.txt", "w");

    fprintf(file, "%s", "Hello World\nWelcome in C");

    fclose(file);
    return 0;
}