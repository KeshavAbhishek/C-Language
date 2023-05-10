// 2. WAP to Read & display data from file.

#include <stdio.h>

int main(){
    FILE * file;

    file = fopen("text.txt", "r");
    char line[100];

    while (fgets(line, 100, file))
    {
        printf("%s", line);
    }
    
    fclose(file);
    return 0;
}