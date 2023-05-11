// 1. Write a C program to read an existing file.

#include <stdio.h>

int main(){
    FILE * file; // Declaration of file pointer

    file = fopen("text.txt", "r"); // Opening file in read mode
    fclose(file); // Closing the file

    fclose(file);
    return 0;
}