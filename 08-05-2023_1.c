#include <stdio.h>

int main(){

    FILE * file;

    int sum = 0;

    file = fopen("08-05-2023.txt", "w"); // Open in writing mode.

    fprintf(file, "%s %d\n", "Ankit_Kumar", 20);
    fprintf(file, "%s %d\n", "Keshav_Abhishek", 20);

    fclose(file); // Closing the file

    file = fopen("08-05-2023.txt", "r"); // Open in read mode

    char line[1000];

    while (fgets(line, 1000, file))
    {
        printf("%s", line);
    }
    
    fclose(file); // Closing the file
    
    return 0;
}